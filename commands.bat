nasm -f win64 imgGrayAsmFinal.asm
gcc -c imgGrayCFinal.c -o imgGray.obj
gcc imgGray.obj imgGrayAsmFinal.obj
a.exe < givenExampleArray.txt
a.exe < 10_10.txt
a.exe < 100_100.txt
a.exe < 1000_1000.txt
