#include<iostream>
#include<math.h>
using namespace std;
void print(int arr[], int n){
    cout<<"\nElements in hash table are : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int count_digits(int key){
    int count=0;
    while(key != 0){
        key =key/10;
        count=count+1;
    }
    return count;
}

int linearCollision(int array[], int address, int size){
    while(array[address]!=0){
        address++;
        if(address==size)
        address=0;
    }
    return address;
}

int midDigitExtraction(int square_len, int square, int pos){
    int fraction=square/(int)pow(10,(square_len - pos));
    int digit=fraction%10;
    return digit;
}

void midSquare(int array[], int value, int size){
    int square=value*value;
    int square_len = count_digits(square);
    int mid = square_len/2;
    int address=midDigitExtraction(square_len, square, (mid+1));
    if(address<size)
    {
        if(array[address]==0){
            array[address]=value;
            cout<<value<<" value inserted at position "<<address<<endl;
        }
        else{
            cout<<"\nCollision : "<<array[address]<<" is already inserted at index "<<address<<endl;
            address=linearCollision(array, address, size);
            array[address]=value;
            cout<<value<<" inserted at index "<<address<<endl<<endl;
        }
    }
    else{
        address=0;
        if(array[address]==0){
            array[address]=value;
            cout<<value<<"inserted at index "<<address<<endl;
        }
        else{
            cout<<"\nCollision : "<<array[address]<<" is already inserted at index "<<address<<endl;
            address=linearCollision(array, address, size);
            array[address]=value;
            cout<<value<<" inserted at index "<<address<<endl;
        }
    }
}

void hashingSearch(int array[],int element, int size){
    int square = element*element;
    int square_len = count_digits(square);
    int mid = square_len/2;
    int index=midDigitExtraction(square_len, square, (mid+1));
    if(array[index] == element){
        cout<<element<<" found at index "<<index<<" in bucket\n";
    }
    else{
        cout<<element<<" not found at any index in bucket\n";
    }
}

int main(){
    int size, value,element;
    cout<<"Enter the size of array:- ";
    cin>>size;
    int array[size]={0};
    for(int i=0; i<size; i++){
        cout<<"Enter the value in array:- ";
        cin>>value;
        midSquare(array,value,size);
    }
    print(array,size);
    cout<<"\nWhich element do you want to find out? ";
    cin>>element;
    hashingSearch(array,element,size);
    return 0;
}