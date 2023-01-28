//Teerakarn Fongkham  65543206063-1  Sec.3
//https://www.youtube.com/watch?v=XSnJzkTKgEQ

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* CreateNode(int data);
void AddNode(struct Node** head, int data);
void UpdateNode(struct Node* head, int oldData, int newData);
void ShowBack(struct Node* head);
void SwapNode(struct Node* head, int data1, int data2);
void ShowAll(struct Node* head);

int main() {
    struct Node* start = NULL;
    AddNode(&start, 10);
    AddNode(&start, 20);
    AddNode(&start, 30);
    AddNode(&start, 40);
    ShowAll(start);

    UpdateNode(start, 10, 99);
    ShowAll(start); 

    UpdateNode(start, 10, 98);
    ShowAll(start); 

    ShowBack(start); 
    printf("\n");

    SwapNode(start, 20, 30);
    ShowAll(start); 

    SwapNode(start, 40, 10);
    ShowAll(start); 

    return 0;
}// end function

struct Node* CreateNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}// end function

void AddNode(struct Node** head, int data) {
    struct Node* newNode = CreateNode(data);
    newNode->next = *head;
    *head = newNode;
}// end function

void UpdateNode(struct Node* head, int oldData, int newData) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == oldData) {
            current->data = newData;
            break;
        }
        current = current->next;
    }
}// end function

void ShowBack(struct Node* head) {
    if (head == NULL) return;
    ShowBack(head->next);
    printf("%d ", head->data);
}// end function

void SwapNode(struct Node* head, int data1, int data2) {
    struct Node* node1 = NULL;
    struct Node* node2 = NULL;
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == data1) {
            node1 = current;
        } else if (current->data == data2) {
            node2 = current;
        }
        current = current->next;
    }

    if (node1 == NULL || node2 == NULL) return;
    int temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
}// end function

void ShowAll(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}// end function
