section .data
const_255 dd 255.0
section .text
bits 64
default rel
global imgCvtGrayInttoFloat

;width @rcx, height @rdx
;arr1 @ r8,  arr2 @r9

imgCvtGrayInttoFloat:
    ;store total number of elements
    mov r10d, ecx
    imul r10d, edx
    ; store current index
    mov rbx, 0
    
L1:
    ;compare index and total elements
    cmp rbx, r10
    jge end
    
    ;load int from arr1
    mov eax, [r8 + rbx*4]
    ; convert int to float
    cvtsi2ss xmm0, eax
    divss xmm0, [const_255]
    ;store in arr2
    movss [r9 + rbx * 4], xmm0  
    inc rbx
    jmp L1

end:
    ret