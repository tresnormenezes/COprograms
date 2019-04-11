MESSAGE MACRO MSG
    LEA DX, MSG
    MOV AH, 09H
    INT 21H
ENDM

DATA SEGMENT
       X DB ?
       Y DB ?
     AVG DB ?   
    MSG1 DB 10, 13, "Enter value for x: $", 10, 13
    MSG2 DB 10, 13, "Enter value for y: $", 10, 13
    MSG3 DB 10, 13, "Average: $", 10, 13
DATA ENDS

CODE SEGMENT 
    ASSUME CS:CODE, DS:DATA
START:  MOV AX, DATA
        MOV DS, AX  
        MESSAGE MSG1
        MOV AH, 01H 
        INT 21H  
        SUB AL, 30H
        MOV X, AL
        MESSAGE MSG2
        MOV AH, 01H
        INT 21H    
        SUB AL, 30H
        MOV Y, AL
          
        ADD AL,X
        MOV BL,02
        DIV BL
           
        MOV ANS, AL
        MESSAGE MSG3
        MOV AL, ANS
        ADD AL, 30H 
        MOV DL, AL
        MOV AH, 02H
        INT 21H
        MOV AH, 4CH
        INT 21H
CODE ENDS
END START
    