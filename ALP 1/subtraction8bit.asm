data segment
    a db 05h
    b db 02h
    c db ?
ends

code segment
start:  mov ax,data
        mov ds,ax
        mov al,a
        sub al,b
        mov c,al
        mov ah, 4ch
        int 21h  
ends
end start
