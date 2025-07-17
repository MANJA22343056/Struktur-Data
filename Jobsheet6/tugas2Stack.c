/*
Nama File   : tugas2Stack.c
Nama        : Manja Fani Oktavia
NIM         : 22343056
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 100

struct Stack {
    char data[MAXSIZE];
    int top;
};

// Deklarasi fungsi
void initStack(struct Stack *);
void push(struct Stack *, char);
char pop(struct Stack *);
int isEmpty(struct Stack *);
int i;

int main()
{
    struct Stack stack;
    initStack(&stack);
    int pilihan;

    while(1) {
        printf("\nMenu Pembalik Kata\n");
        printf("1. Input Kata\n");
        printf("2. Balik Kata\n");
        printf("3. Exit\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);fflush(stdin);

        switch(pilihan) {
            case 1: {
                char str[MAXSIZE];
                printf("Masukkan kata: ");
                scanf("%s", str);fflush(stdin);
                int length = strlen(str);

                for(i=0; i<length; i++) {
                    push(&stack, str[i]);
                }
                break;
            }
            case 2: {
                printf("Kata yang dibalik: ");
                while(!isEmpty(&stack)) {
                    printf("%c", pop(&stack));
                }
                printf("\n");
                break;
            }
            case 3: {
                exit(0);
            }
            default: {
                printf("Pilihan tidak valid!\n");
            }
        }
    }

    return 0;
}

void initStack(struct Stack *s) {
    s->top = -1;
}

void push(struct Stack *s, char data) {
    if(s->top == MAXSIZE-1) {
        printf("Stack overflow!\n");
        return;
    }
    s->data[++s->top] = data;
}

char pop(struct Stack *s) {
    if(isEmpty(s)) {
        printf("Stack underflow!\n");
        return '\0';
    }
    return s->data[s->top--];
}

int isEmpty(struct Stack *s) {
    return s->top == -1;
}
