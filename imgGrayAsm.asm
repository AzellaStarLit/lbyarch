section .data
whiteOrIValue dd 255.0

section .text
bits 64
default rel
global imgCvtGrayInttoFloat
extern printf

imgCvtGrayInttoFloat:
    mov rdi, rcx     
    mov rsi, rdx        
   
outerLoop:
    cmp rdi, 0          
    jle endOuter  
    mov rdx, rsi        
    
innerLoop:
    cmp rsi, 0           
    jle endInner   

    mov rax, r8      
    CVTSI2SS xmm0, rax   
    DIVSS xmm0, [whiteOrIValue]             
    movss [r9], xmm0    

    add r8, 4           
    add r9, 4          
    dec rsi           
    jmp innerLoop 

endInner:
    dec rdi        
    jmp outerLoop  

endOuter:
    ret