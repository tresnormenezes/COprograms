data segment
    a db 02h
    b db 05h
    c db ?
ends

code segment
start:  mov ax,data
        mov ds,ax
        mov al,a
        add al,b
        mov c,al
        mov ah, 4ch
        int 21h  
ends
end start
