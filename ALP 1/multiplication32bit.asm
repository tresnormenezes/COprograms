data segment
    a dd 0010h
    b dd 0020h
    c dd ?
ends

code segment
start:  mov ax,data
        mov ds,ax
        mov ax,a
        mul b
        mov c,ax
        mov ah, 4ch
        int 21h  
ends
end start
