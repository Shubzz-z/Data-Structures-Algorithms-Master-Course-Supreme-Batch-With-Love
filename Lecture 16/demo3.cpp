#include <iostream> 
#include <cstdlib> 
using namespace std; 

struct node { 
    int data; 
    struct node* next; 
};

struct node* front = NULL; 
struct node* rear = NULL; 

void enqueue() { 
    int input; 
    struct node* newNode = (struct node*)malloc(sizeof(struct node*)); 
    cout<<"Enter element to be inserted: ";
    cin>>input; 
    newNode->data = input; 
    newNode->next = NULL; 
    if (front == NULL && rear == NULL) { 
        front = newNode; 
        rear = newNode; 
        rear->next = front; 
    } 
    else { 
        rear->next = newNode; 
        rear = newNode; 
        rear->next = front; 
    } 
} 
void dequeue() { 
    if (front == NULL & rear == NULL) { 
        cout << "Circular Queue underflow." << endl; return; 
    } 
    struct node* temp = front; 
    if (front == rear) { 
        front = rear = NULL; 
    }

    else { 
        front = front->next; 
        rear->next = front; 
    } 
    cout << temp->data << " is removed from circular  queue." << endl; 
    free(temp); 
} 
void display() { 
    if (front == NULL & rear == NULL) { 
        cout << "Circular Queue is empty." << endl;
        return; 
    } 
    struct node* temp = front; 
    do { 
        cout << temp->data << " "; 
        temp = temp->next; 
    } while (temp != front); 
    cout << endl; 
} 
int main() { 
    int menu; 
    cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n"; 
    do { 
        cout<<"Enter your choice: ";
        cin >> menu; 
        switch (menu) { 
            case 1: 
                enqueue(); 
                break; 
            case 2: 
                dequeue(); 
                break; 
            case 3: 
                display(); 
                break; 
            case 4: 
                break; 
            default: 
            cout << "Invalid choice"; 
        } 
    } while (menu != 4); 
}