MESSAGE MACRO MSG
    LEA DX, MSG
    MOV AH, 09H
    INT 21H
ENDM
 
INPUT MACRO 
    MOV AH,01H
    INT 21H
ENDM

DATA SEGMENT
     ARR DB 5 DUP(0)
     EVEN DB ?
     ODD DB ?        
     
    MSG1 DB 10, 13, "Enter array: $", 10, 13
    MSG2 DB 10, 13, "Sum of even nos: $", 10, 13
    MSG3 DB 10, 13, "Sum of odd nos: $", 10, 13
DATA ENDS

CODE SEGMENT 
    ASSUME CS:CODE, DS:DATA
START:  MOV AX, DATA
        MOV DS, AX  
        LEA SI,ARR  
        MOV CX,4
        MESSAGE MSG1
   TOP: INPUT    
        SUB AL,30H
        MOV [SI],AL 
        LOOP TOP  
        
        MESSAGE MSG2
        MOV AL, EVEN
        ADD AL, 30H 
        MOV DL, AL
        MOV AH, 02H
        INT 21H
        MOV AH, 4CH
        INT 21H
CODE ENDS
END START
    