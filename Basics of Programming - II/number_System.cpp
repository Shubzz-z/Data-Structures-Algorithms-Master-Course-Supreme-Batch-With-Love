#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinary(int decimal){
    int i=0;
    int binary=0;
    while(decimal>0){
        int bit = decimal % 2;
        binary = bit * pow(10,i++) + binary;
        decimal = decimal / 2;
    }
    return binary;
}
int decimalToBinary2(int decimal){
    int i=0;
    int binary=0;
    while(decimal>0){
        int bit = decimal & 1;
        binary = bit * pow(10,i++) + binary;
        decimal = decimal >> 1;
    }
    return binary;
}

int binaryToDecimal(int binary){
    int i=0;
    int decimal=0;
    while(binary>0){
        int bit = binary % 2;
        decimal = bit * pow(2,i++) + decimal;        
        binary = binary / 10;
    }
    return decimal;
}

int binaryToDecimal2(int binary){
    int i=0;
    int decimal=0;
    while(binary>0){
        int bit = binary & 1;
        cout<<"bit : "<<bit<<endl;
        decimal = bit * pow(2,i++) + decimal;
        cout<<"decimal : "<<decimal<<endl;
        binary = binary / 10;
        cout<<"binary : "<<binary<<endl;
    }
    return decimal;
}

int main(){
    int n;
    cout<<"Enter no to convert : ";
    cin>>n;
    cout<<n<<":-->"<<binaryToDecimal2(n);
    return  0;
}