data segment
    a dw 0010h
    b dw 0020h
    c dw ?
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
