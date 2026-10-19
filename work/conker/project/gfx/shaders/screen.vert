#version 450
// Screen-space NV2A vertices (post viewport transform) -> clip space.

layout(push_constant) uniform Push {
    vec2 surface_size;
    uint alpha_func;   // GL compare enum minus 0x200 (0 = NEVER .. 7 = ALWAYS)
    float alpha_ref;
} pc;

layout(location = 0) in vec4 in_pos;     // x, y (pixels), z (0..1), rhw
layout(location = 1) in vec2 in_uv;
layout(location = 2) in vec4 in_color;   // D3DCOLOR read as B8G8R8A8_UNORM

layout(location = 0) out vec2 v_uv;
layout(location = 1) out vec4 v_color;

void main()
{
    float w = in_pos.w > 0.0 ? 1.0 / in_pos.w : 1.0;
    vec2 ndc = in_pos.xy / pc.surface_size * 2.0 - 1.0;
    gl_Position = vec4(ndc * w, in_pos.z * w, w);
    v_uv = in_uv;
    v_color = in_color;
}
