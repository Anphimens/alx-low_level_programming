section .data
   hello: db "Hello, Holberton",0Ah, 0 ; The message to print


section .text
  global main
  extern printf


main:
    push   rbp		; Savee the base pointer
    mov    rbp, rsp     ; Set the stack pointer as the base pointer

    ; Print the message using printf
    mov    rdi, hello   ; Pass the address of the message of the first argument to printf
    mov    rax, 0       ; Clear rax register
    call   printf       ; Call printf function to print the message


    ; Exit the program
    mov    eax, 0       ; Set the return value of the program to 0
    pop    rbp          ; Restore the base pointer
    ret                 ; Return to the operating system
