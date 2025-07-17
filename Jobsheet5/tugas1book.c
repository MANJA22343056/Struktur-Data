/*	
	Nama File : tugas1book.c
	Nama : Manja Fani Oktavia
	Nim : 22343056
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    int year;
    struct Book *prev;
    struct Book *next;
};

struct Book *head = NULL;
struct Book *tail = NULL;

void addBook(char title[], char author[], int year) {
    struct Book *newBook = (struct Book*) malloc(sizeof(struct Book));
    strcpy(newBook->title, title);
    strcpy(newBook->author, author);
    newBook->year = year;
    newBook->prev = NULL;
    newBook->next = NULL;

    if (head == NULL) {
        head = newBook;
        tail = newBook;
    } else {
        tail->next = newBook;
        newBook->prev = tail;
        tail = newBook;
    }
}

void deleteBook(char title[]) {
    struct Book *current = head;

    while (current != NULL) {
        if (strcmp(current->title, title) == 0) {
            if (current == head) {
                head = current->next;
                if (head != NULL) {
                    head->prev = NULL;
                }
            } else if (current == tail) {
                tail = current->prev;
                tail->next = NULL;
            } else {
                current->prev->next = current->next;
                current->next->prev = current->prev;
            }
            free(current);
            printf("Book with title \"%s\" has been deleted.\n", title);
            return;
        }
        current = current->next;
    }

    printf("Book with title \"%s\" not found.\n", title);
}

void display() {
    struct Book *current = head;

    while (current != NULL) {
        printf("Title: %s\n", current->title);
        printf("Author: %s\n", current->author);
        printf("Year: %d\n", current->year);
        printf("\n");
        current = current->next;
    }
}

int main() {
    addBook("Harry Potter and the Philosopher's Stone", "J.K. Rowling", 1997);
    addBook("The Da Vinci Code", "Dan Brown", 2003);
    addBook("The Hunger Games", "Suzanne Collins", 2008);
    addBook("To Kill a Mockingbird", "Harper Lee", 1960);

    printf("Initial list of books:\n\n");
    display();

    printf("Deleting \"The Da Vinci Code\":\n");
    deleteBook("The Da Vinci Code");
    printf("\n");

    printf("Adding \"The Catcher in the Rye\":\n");
    addBook("The Catcher in the Rye", "J.D. Salinger", 1951);
    printf("\n");

    printf("Deleting \"The Hunger Games\":\n");
    deleteBook("The Hunger Games");
    printf("\n");

    printf("Final list of books:\n\n");
    display();

    return 0;
}
