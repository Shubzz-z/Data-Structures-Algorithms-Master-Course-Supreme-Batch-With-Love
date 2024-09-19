#include <iostream>

using namespace std;
int front = -1; 
int rear = -1; 
void enqueue(int arr[], int value, int length) {
    if (rear == length - 1){ 
    cout << "Queue overflow" << endl; 
    } 
    else { 
        front = 0; 
        rear++; 
        arr[rear] = value; 
    } 
} 
void dequeue(int arr[]) { 
    if (front == -1 || front > rear) { 
        cout << "Queue underflow." << endl; 
        return; 
    } 
    else { 
        cout << arr[front] << " is removed from the  queue." << endl; 
        front++; 
    }
}
void display(int arr[], int length) {
    if (front == -1 || front > rear) {
        cout << "Queue is empty.";
    }
    else {
        cout << "The values in queue are: " << endl;
        for (int i = front; i <= rear; i++){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
} 
int main(){
    int length;
    int value;
    cout << "Enter the length of queue: ";
    cin >> length;
    int arr[length];
    cout << "1. Enqueue" << endl << "2. Dequeue" << endl << "3. Display" << endl << "4. Exit" << endl;
    do{
        cout<<"Enter your Choice : ";
        cin >> value;
        switch (value) {
            case 1:
                cout << "Enter a value to add in queue: ";
                int input;
                cin >> input;
                enqueue(arr, input, length);
                break;
            case 2:
                dequeue(arr);
                break;
            case 3:
                display(arr, length);
                break;
            case 4:
                abort();
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (value < 4);
}