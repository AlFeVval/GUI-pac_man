@echo off
if not exist ..\build mkdir ..\build
pushd ..\build
del *.pbd > NUL 2> NUL
echo WAITING FOR PDB > lock.tmp

c++ -o run -g -O2 ..\code\win32_platform.c -luser32 -lgdi32 -Wl,--no-undefined -fpermissive

del lock.tmp
del *.obj

popd
