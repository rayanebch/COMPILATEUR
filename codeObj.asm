TITLE : TP.asm

DATA SEGMENT
A	DB ?
B	DB ?
D	DB ?
array	DB ?
DATA ENDS
CODE SEGMENT
MAIN
ASSUME CS: CODE, DS: DATA, SS: PILE
	 MOV AX,DATA
	 MOV DS,AX

; Quadruplet 0
MOV AX, 1
MOV BX, 54
MOV , AX

; Quadruplet 1
MOV AX, array
MOV BX, 
MOV , AX

; Quadruplet 2
MOV AX, B
MOV BX, 
MOV array[B], AX

; Quadruplet 3
MOV AX, A
MOV BX, 
MOV array[10], AX

; Quadruplet 4
MOV AX, array[A]
MOV BX, array[2]
ADD AX, BX
MOV T1, AX

; Quadruplet 5
MOV AX, T1
MOV BX, 
MOV array[10], AX

; Quadruplet 6
MOV AX, 15
MOV BX, 3
DIV BX
MOV T2, AX

; Quadruplet 7
MOV AX, T2
MOV BX, B
ADD AX, BX
MOV T3, AX

; Quadruplet 8
MOV AX, B
MOV BX, 10
SUB AX, BX
MOV T4, AX

; Quadruplet 9
MOV AX, T4
MOV BX, B
DIV BX
MOV T5, AX

; Quadruplet 10
MOV AX, T3
MOV BX, T5
MUL BX
MOV T6, AX

; Quadruplet 11
MOV AX, B
MOV BX, 2
DIV BX
MOV T7, AX

; Quadruplet 12
MOV AX, T6
MOV BX, T7
ADD AX, BX
MOV T8, AX

; Quadruplet 13
MOV AX, T8
MOV BX, 
MOV A, AX

; Quadruplet 14
MOV AX, 22
MOV BX, temp_cond
MOV , AX

; Quadruplet 15
MOV AX, 0
MOV BX, 1
ADD AX, BX
MOV temp_cond, AX

; Quadruplet 16
MOV AX, 21
MOV BX, temp
CMP , 1
JG 1
MOV D, AX

; Quadruplet 17
MOV AX, D
MOV BX, A
MUL BX
MOV T9, AX

; Quadruplet 18
MOV AX, T9
MOV BX, 
MOV A, AX

; Quadruplet 19
MOV AX, 16
MOV BX, 
JMP 1
MOV , AX

; Quadruplet 20
MOV AX, 29
MOV BX, 
JMP 1
MOV , AX

; Quadruplet 21
MOV AX, 31
MOV BX, temp_cond
MOV , AX

; Quadruplet 22
MOV AX, 29
MOV BX, temp_cond
MOV , AX

; Quadruplet 23
MOV AX, 99
MOV BX, D
SUB AX, BX
MOV T10, AX

; Quadruplet 24
MOV AX, 29
MOV BX, temp_cond
MOV , AX

; Quadruplet 25
MOV AX, 0
MOV BX, 
MOV B, AX

; Quadruplet 26
MOV AX, 30
MOV BX, 
JMP 1
MOV , AX

; Quadruplet 27
MOV AX, 22
MOV BX, 
JMP 1
MOV , AX

; Quadruplet 28
MOV AX, temp_cond
MOV BX, 
MOV A, AX

; Quadruplet 29
MOV AX, 0
MOV BX, 2
ADD AX, BX
MOV temp_cond, AX

; Quadruplet 30
MOV AX, 38
MOV BX, temp
CMP , 1
JG 1
MOV n, AX

; Quadruplet 31
MOV AX, 3
MOV BX, 
MOV array[D], AX

; Quadruplet 32
MOV AX, 34
MOV BX, 
JMP 1
MOV , AX

MOV AH, 4Ch
INT 21h
MAIN ENDS
END MAIN
