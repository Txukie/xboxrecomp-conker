#version 450
// Texture stage 0 modulated by the diffuse colour, with NV2A alpha test.

layout(push_constant) uniform Push {
    vec2 surface_size;
    uint alpha_func;
    float alpha_ref;
} pc;

layout(set = 0, binding = 0) uniform sampler2D tex0;

layout(location = 0) in vec2 v_uv;
layout(location = 1) in vec4 v_color;
layout(location = 0) out vec4 out_color;

bool alpha_pass(float a)
{
    switch (pc.alpha_func) {
    case 0u: return false;
    case 1u: return a <  pc.alpha_ref;
    case 2u: return a == pc.alpha_ref;
    case 3u: return a <= pc.alpha_ref;
    case 4u: return a >  pc.alpha_ref;
    case 5u: return a != pc.alpha_ref;
    case 6u: return a >= pc.alpha_ref;
    default: return true;
    }
}

void main()
{
    vec4 c = texture(tex0, v_uv) * v_color;
    if (!alpha_pass(c.a))
        discard;
    out_color = c;
}
