#include<iostream>
using namespace std;
int main(){
    // char n;
    // if(cin>>n){
    //     cout<<n;
    // }
    // if(cout<<"Shubham"){
    //     cout<<"More";
    // }
    // return 0;

    // Hollow Rectangle
    int r=6,c=6;
    // cout<<"Enter number of row you want :";
    // cin>>r;
    // cout<<"Enter number of col you want :";
    // cin>>c;
    // for (int row = 0; row<r; row++){
    //     for (int col = 0; col<c; col++){
    //         if(row==0 || row==r-1){
    //             cout<<"* ";
    //         }else if(col==0 || col==c-1){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Half Pyramid
    // for (int row = 0; row < r; row++)
    // {
    //     for (int col = 0; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // // Inverted Half Pyramid
    // for (int row = 0; row < r; row++)
    // {
    //     for (int col = 0; col < r-row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Numeric Half Pyramid
    // for (int row = 0; row < r; row++)
    // {
    //     for (int col = 0; col <= row; col++)
    //     {
    //         cout<<col+1<<" ";
    //     }
    //     cout<<endl;
    // }

    // // Inverted Numeric Half Pyramid
    // for (int row = 0; row < r; row++)
    // {
    //     for (int col = 0; col < r-row; col++)
    //     {
    //         cout<<col+1<<" ";
    //     }
    //     cout<<endl;
    // }

    // Full Pyramid
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < r-row-1; col++)
        {
            if(!row && !col){
                cout<<" ";
            }else{
                cout<<"  ";
            }
        }
        if(!row)
            cout<<"*";

        for (int col = 0; col < row; col++)
        {
            cout<<"* ";
        }
        for (int col = 0; col < row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    
}