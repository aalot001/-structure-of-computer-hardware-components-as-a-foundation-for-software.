.globl _pushtest
_pushtest:
    push    %rbp
    movl    %esp, %ebp
    movl    %esp, %eax    #Copy stack pointer
    push    %rsp        #Push stack pointer
    pop    %rdx        #Pop it back
    subl   %edx,%eax    #Subtract new from old stack pointer
    pop    %rbp
    ret
