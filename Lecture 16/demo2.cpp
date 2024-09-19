#include <iostream>
using namespace std; 

struct node { 
    int data; 
    struct node* next; 
}; 

struct node* front = NULL; 
struct node* rear = NULL; 
struct node* temp; 

void enqueue(int input) { 
    if (front == NULL) { 
        rear = (struct node*)malloc(sizeof(struct node));
        rear->next = NULL; 
        rear->data = input; 
        front = rear; 
    } 
    else { 
        temp = (struct node*)malloc(sizeof(struct node));
        rear->next = temp; 
        temp->data = input; 
        temp->next = NULL; 
        rear = temp; 
    } 
} 
void dequeue() { 
    temp = front; 
    if (front == NULL) { 
        cout << "The queue underflow." << endl; 
    } 
    else { 
        if (front == rear) { 
            cout << front->data << " is removed from the  queue." << endl; 
            front = NULL; 
            rear = NULL; 
        } 
        else { 
            temp = temp->next; 
            cout << front->data << " is removed from the  queue." << endl; 
            free(front);    
            front = temp; 
        } 
    } 
} 
void display() { 
    temp = front; 
    if ((front == NULL) && (rear == NULL)) { 
        cout << "The queue is empty." << endl; 
    } else { 
        cout << "The elements in queue are: " << endl;
        while (temp != NULL) { 
            cout << temp->data << " "; 
            temp = temp->next; 
        } 
        cout << endl; 
    } 
} 
int main() { 
    int menu; 
    cout << "1. Enqueue" << endl << "2. Dequeue" << endl << "3. Display" << endl << "4. Exit" << endl ; 
    do { 
        cout<< "Enter your choice: ";
        cin >> menu; 
        switch (menu) { 
            case 1: 
                int input; 
                cout << "Enter the value to be inserted: "; cin >> input; 
                enqueue(input); 
                break; 
            case 2: 
                dequeue(); 
                break; 
            case 3: 
                display(); 
                break; 
            case 4: 
                cout << "Exited"; 
                break; 
            default: 
                cout << "Invalid choice." << endl; 
        } 
    } while (menu != 4); 
}