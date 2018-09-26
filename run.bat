echo compiling with WATCOM
echo dllmain.cpp
wcc386 /bt=nt /mf /w0 /zq /j /zp4 /fp5 /fpi87 /5r /otimra /s dllmain.cpp
echo dllmain.cpp
pause