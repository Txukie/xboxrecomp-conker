# LZMA SDK (7z decoder)

The C files of Igor Pavlov's LZMA SDK 26.03 that its 7z decoder (`C/Util/7z`,
`7zdec`) builds from, unchanged: https://www.7-zip.org/sdk.html
(`lzma2603.7z`, SHA-256 86c213f752520ab5325c310f50bef63ec344b56dd1c80b0246d06dc6cec953b2,
from https://github.com/ip7z/7zip/releases/tag/26.03). Public domain
(`lzma-sdk.txt`).

`src/conker_7z.c` unpacks the Uncensor mod's `.7z` with it, built with
`Z7_PPMD_SUPPORT` and `Z7_EXTRACT_ONLY` (CMakeLists.txt, `lzma_sdk_7z`).
