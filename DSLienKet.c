/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

void CreateNULL(Node**head){
    *head = NULL;
}

void InsertHeadNode(Node**head, int Inputdata){
    Node *NewNode = (Node*)malloc(sizeof(Node));
    
    NewNode->data = Inputdata;
    NewNode->next = *head;
    *head = NewNode;
}

void InsertLastNode(Node**head, int Inputdata){
    Node *NewNode = (Node*)malloc(sizeof(Node));
    NewNode->data = Inputdata;
    NewNode->next = NULL;
    if (head == NULL){
        *head = NewNode;
        return;
    }
    
    Node *temp = *head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    
    temp->next = NewNode;
}

void InsertNodeAtPosition(Node**head, int Inputdata, int pos){
    Node *NewNode = (Node*)malloc(sizeof(Node));
    NewNode->data = Inputdata;
    
    if (*head == NULL){
        NewNode->next = NULL;
        *head = NewNode;
        return;
    }
    
    if (pos == 1){
        InsertHeadNode(&(*head), Inputdata);
        return;
    }
    
    int count = 1;
    Node *temp = *head;
    while (temp->next != NULL && count < pos - 1){
        temp = temp->next;
        count++;
    }
    
    if (count < pos - 2){
        return;
    }
    NewNode->next = temp->next;
    temp->next = NewNode;
}

int CountLinkList(Node* head){
    int count = 0;
    if (head == NULL){
        return 0;
    }
    
    while (head!=NULL){
        head = head->next;
        count++;
    }
    return count;
}

void PrintLinkList(Node* head){
    if (head == NULL){
        return;
    }
    
    while (head != NULL){
        printf("%d ", head->data);
        head = head->next;
    }
}

void DeleteHeadNode(Node**head){
    Node *temp = *head;
    
    if (*head == NULL){
        return;
    }
    
    *head = (*head)->next;
    free(temp);
}

void DeleteLastNode(Node**head){
    Node *temp = *head;
    
    if (*head == NULL){
        return;
    }
    
    if (temp->next == NULL){
        *head = NULL;
        return;
    }
    
    while (temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void DeleteNodeAtPosition(Node**head, int pos){
    Node *Current = *head;
    Node *Next = Current->next;
    Node *Previous = NULL;
    if (*head == NULL){
        return;
    }
    
    if (pos == 1){
        DeleteHeadNode(&(*head));
        return;
    }
    
    if (CountLinkList(*head) < pos){
        return;
    }
    
    int count = 1;
    
    while (Current != NULL && count < pos){
        Previous = Current;
        Current = Current->next;
        Next = Current->next;
        count++;
    }
    
    free(Current);
    Previous->next = Next;
    
}

void DeleteAllNode(Node**head){
    Node *temp = *head;
    
    while (*head != NULL){
        *head = (*head)->next;
        free(temp);
        temp = *head;
    }
}

void SwapNode (Node**head, int pos1, int pos2){
    if (*head == NULL || pos1 == pos2){
        return;
    }
    
    if (pos1 > pos2){
        int temppost = pos1;
        pos1 = pos2;
        pos2 = temppost;
    }
    
    if (pos2 > CountLinkList(*head)){
        return;
    }
    
    int count = 1;
    Node* Pre1 = NULL;
    Node* Pre2 = NULL;
    Node* Current1 = *head;
    Node* Current2 = *head;
    Node* Next1 = Current1->next;
    Node* Next2 = Current2->next;
    
    while(count < pos2){
        if (count < pos1){
            Pre1 = Current1;
            Current1 = Current1->next;
            Next1 = Current1->next;
        }
        
        Pre2 = Current2;
        Current2 = Current2->next;
        Next2 = Current2->next;

        count++;
    }
    
    // Node* TempCurrent = Current1;

    if (Pre1 == NULL){
        *head = Current2;
        (*head)->next = Next1;
        Pre2->next = Current1;
        Pre2->next->next = Next2;
    } else {
        Pre1->next = Current2;
        Pre1->next->next = Next1;
        Pre2->next = Current1;
        Pre2->next->next = Next2;
    }
}

int main()
{
    Node *head = (Node*)malloc(sizeof(Node));
    CreateNULL(&head);
    InsertHeadNode(&head, 5);
    InsertHeadNode(&head, 15);
    InsertHeadNode(&head, 25);
    InsertHeadNode(&head, 35);
    // InsertNodeAtPosition(&head, 45, 10);
    // printf("%d ", CountLinkList(head));
    // DeleteLastNode(&head);
    SwapNode(&head, 1, 4);
    PrintLinkList(head);
    
    PrintLinkList(head);
    return 0;
}