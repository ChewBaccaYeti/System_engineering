.LC0:
        .string "%d\n"
"main":
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16
.L3:
        mov     DWORD PTR [rbp-4], 0
        mov     DWORD PTR [rbp-8], 1
.L2:
        mov     eax, DWORD PTR [rbp-4]
        mov     esi, eax
        mov     edi, OFFSET FLAT:.LC0
        mov     eax, 0
        call    "printf"
        mov     edx, DWORD PTR [rbp-4]
        mov     eax, DWORD PTR [rbp-8]
        add     eax, edx
        mov     DWORD PTR [rbp-12], eax
        mov     eax, DWORD PTR [rbp-8]
        mov     DWORD PTR [rbp-4], eax
        mov     eax, DWORD PTR [rbp-12]
        mov     DWORD PTR [rbp-8], eax
        cmp     DWORD PTR [rbp-4], 254
        jle     .L2
        jmp     .L3