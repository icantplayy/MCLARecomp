del lib\ppc\*.* -q
del recomp_out.txt

.\tools\XenonRecomp\out\build\x64-Clang-Debug\XenonRecomp\XenonRecomp.exe .\lib\config\mcla.toml .\tools\XenonRecomp\XenonUtils\ppc_context.h >> recomp_out.txt 2>&1