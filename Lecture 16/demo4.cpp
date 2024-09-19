#include <iostream> 
using namespace std; 
struct node { 
    int data; 
    struct node* next; 
}; 
struct node* front = NULL; 
struct node* rear = NULL; 
void enQrear() { 
    int input; 
    cout << "Enter element to be inserted: "; cin >> input; 
    if (front == NULL) { 
        front = (struct node*)malloc(sizeof(struct  node*)); 
        front->data = input; 
        front->next = NULL; 
        rear = front; 
    } 
    else { 
        struct node* temp = (struct node*)malloc(sizeof(struct node*)); 
        temp->data = input; 
        temp->next = NULL; 
        rear->next = temp; 
        rear = temp; 
    }
    cout << rear->data << " added from rear." << endl;
} 
void enQfront() { 
    int input; 
    cout << "Enter element to be inserted: "; cin >> input; 
    if (front == NULL) { 
        front = (struct node*)malloc(sizeof(struct  node*)); 
        front->data = input; 
        front->next = NULL;
        rear = front; 
    } 
    else { 
        struct node* temp = (struct node*)malloc(sizeof(struct node*)); 
        temp->data = input; 
        temp->next = front; 
        front = temp; 
    } 
    cout << front->data << " added from front." << endl;
}

void deQrear() { 
    if (front == NULL) { 
        cout << "Queue underflow!" << endl; 
        return; 
    } 
    if (front->next == NULL) { 
        cout << front->data << " is deleted from rear." << endl; 
        free(front); 
        front = rear = NULL; 
    } 
    else { 
        struct node* temp = (struct node*)malloc(sizeof(struct node*)); 
        for (temp = front; temp->next != rear; temp = temp->next); 
        cout << rear->data << " is deleted from front." << endl; 
        free(rear); 
        temp->next = NULL; 
        rear = temp; 
    } 
} 

void deQfront() { 
    if (front == NULL) { 
        cout << "Queue underflow!" << endl; 
        return; 
    } 
    struct node* temp = (struct node*)malloc(sizeof(struct  node*)); 
    temp = front; 
    front = front->next; 
    cout << temp->data << " is deleted from front." << endl;

    free(temp); 
    if (front == NULL) { 
        rear == NULL; 
    } 
} 

void display() { 
    if (front == NULL) { 
        cout << "Deque is empty" << endl; 
    } 
    else { 
        struct node* temp = (struct node*)malloc(sizeof(struct node*)); 
        for (temp = front; temp != NULL; temp = temp->next) { 
            cout << temp->data << " "; 
        } 
        cout << endl; 
    } 
}

int main() { 
    int menu; 
    bool isInputRestricted = true; 
    cout << "Which type of deque do you want?\n1. Input  Restricted\n2. Output Restricted\nEnter your choice: "; cin >> menu; 
    if (menu == 1) { 
        isInputRestricted = true; 
    } 
    else if (menu == 2) { 
        isInputRestricted = false; 
    } 
    else { 
        cout << "Invalid choice, started with Input Restricted Deque." << endl; 
    } 
    if (isInputRestricted) { 
        cout << "1. Enqueue from rear\n2. Dequeue from  front\n3. Dequeue from rear\n4. Display\n5. Exit\n"; 
        do {
            cout<<"Enter your choice: ";
            cin >> menu; 
            switch (menu) { 
                case 1:
                    enQrear(); 
                    break; 
                case 2: 
                    deQfront(); 
                    break; 
                case 3: 
                    deQrear(); 
                    break; 
                case 4: 
                    display(); 
                    break; 
                case 5: 
                    break; 
                default: 
                    cout << "Invalid choice" << endl; 
            } 
        } while (menu != 5); 
    }else { 
        cout << "1. Enqueue from rear\n2. Enqueue from  front\n3. Dequeue from front\n4. Display\n5. Exit\n"; 
        do {
            cout<<"Enter your choice: ";
            cin >> menu; 
            switch (menu) { 
                case 1: 
                    enQrear(); 
                    break; 
                case 2: 
                    enQfront(); 
                    break; 
                case 3: 
                    deQfront(); 
                    break; 
                case 4: 
                    display(); 
                    break; 
                case 5: 
                    break; 
                default: 
                    cout << "Invalid choice" << endl; 
            } 
        } while (menu != 5); 
    } 
}