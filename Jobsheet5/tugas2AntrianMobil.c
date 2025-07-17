/*	
	Nama File : tugas2AntrianMobil.c
	Nama : Manja Fani Oktavia
	Nim : 22343056
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Node structure
struct Node {
    char noPlat[20];
    char merkMobil[30];
    char namaPemilik[40];
    struct Node* next;
    struct Node* prev;
};

// Global variables
struct Node* head = NULL;
struct Node* tail = NULL;

// Function to create a new node
struct Node* createNode(char noPlat[], char merkMobil[], char namaPemilik[]) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    strcpy(newNode->noPlat, noPlat);
    strcpy(newNode->merkMobil, merkMobil);
    strcpy(newNode->namaPemilik, namaPemilik);
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Function to insert a node at the end of the list
void insertEnd(char noPlat[], char merkMobil[], char namaPemilik[]) {
    struct Node* newNode = createNode(noPlat, merkMobil, namaPemilik);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

// Function to delete a node by no plat
void deleteNode(char noPlat[]) {
    struct Node* temp = head;
    while (temp != NULL) {
        if (strcmp(temp->noPlat, noPlat) == 0) {
            if (temp == head) {
                head = temp->next;
                if (head != NULL) {
                    head->prev = NULL;
                } else {
                    tail = NULL;
                }
            } else if (temp == tail) {
                tail = temp->prev;
                tail->next = NULL;
            } else {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
            }
            free(temp);
            return;
        }
        temp = temp->next;
    }
    printf("No plat %s tidak ditemukan dalam antrian.\n", noPlat);
}

// Function to display the list
void displayList() {

    printf("Antrian mobil saat ini:\n");
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%s - %s - %s\n", temp->noPlat, temp->merkMobil, temp->namaPemilik);
        temp = temp->next;
    }
}

int main() {
    insertEnd("BA 1234 YN", " Pajero", "Iyon");
    insertEnd("BA 5678 JA", "Jazz", "Manja");
    insertEnd("BA 9012 GL", "Fortuner ", "Gilang");
    insertEnd("BA 3456 SN", " Brio", "Santi");

    displayList();

    deleteNode("BA 5678 CD");
    deleteNode("BA 6789 IJ");

    displayList();

    return 0;
}
