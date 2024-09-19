#include <iostream> 
#include <cstdlib> 
using namespace std; 

typedef struct Node { 
    int data; 
    int priority; 
    struct Node* next; 
} node; 
node* front = NULL; 

void enqueue() { 
    int input, priority; 
    cout << "Enter element to be inserted: "; 
    cin >> input; 
    cout << "Enter the priority of inserted element: ";
    cin >> priority; 
    node* newNode = (node*)malloc(sizeof(node)); node* temp = front; 
    newNode->data = input;
    newNode->priority = priority; 
    if (front == NULL || priority < front->priority) {
        newNode->next = front; 
        front = newNode; 
    }else{
        temp = front;
        while (temp->next != NULL && temp->next->priority  <= priority) { 
            temp = temp->next; 
        } 
        newNode->next = temp->next; 
        temp->next = newNode; 
    }
}
void dequeue() { 
    if (front == NULL) { 
        cout << "Queue underflow." << endl; 
    }else { 
        node* temp = front; 
        front = front->next; 
        cout << "[" << temp->data << "," << temp->priority  << "] is removed from priority queue." << endl; free(temp); 
    } 
}
void display() { 
    if (front == NULL) { 
        cout << "Priority queue is empty." << endl; 
        return; 
    } 
    node* temp = front; 
    while (temp != NULL) { 
        cout << "[" << temp->data << "," << temp->priority  << "]" << " "; 
        temp = temp->next; 
    } 
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
                cout << "Invalid choice" << endl; 
        } 
    } while (menu != 4); 
}