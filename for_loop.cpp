#include <iostream>
using namespace std;

int main(){

    // printf("hello");

    // int num=3;


    // for(int i=1; i<=10 ; i++){
    //     cout <<num <<" X "<< i<< " = " <<num*i<<endl;
    // }

    // char ch = 97;
    // for (int i = 0; i < 26; i++)
    // {
    //     cout<<ch<<endl;
    //     ch++;
    // }


    // for(int i=1; i<100; i=i+2){
    //     cout<<i;
    // }


    // for(int i=1; i<100; i=i*2){
    //     cout<<i<<endl;
    // }


    // for (int i = 0; i<3 ; i++) {
    //     for (int j = 0; j < 5; j++)
    //     {
    //        cout<<"*";
    //     }
    //     cout<<endl;  
    // }
    

    // int row,col;

    // cout<<"Enter number of rows and cols : ";
    // cin>>row>>col;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl; 
    // }





    //   int row,col;

    // cout<<"Enter number of rows and cols : ";
    // cin>>row>>col;

    // for(int i=0; i<row; i++){
    //     if(i==0 || i==row-1){
    //         for (int i = 0; i < col; i++)
    //         {
    //              cout<<"*";
    //         }
                
    //     }

    //     else{
    //         cout<<"*";
    //         for (int i = 0; i < 8; i++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    // return 0;



// *
// **
// ***
// ****
// *****
// ******
    // int n=6;
    // for (int i = 0; i<n; i++) {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    
    // }



// 12345
// 1234
// 123
// 12
// 1
//     int n=5;
//     for (int i = 0; i<n; i++) {
//         for (int j = 0; j<n-i; j++) {
//             cout<<j+1;
//         }
//         cout<<endl;
// }

int rows=6;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < rows - i; j++)
    {
        cout<<" ";
    }

    for (int k = 0; k < i+1; k++)
    {
        cout<<"* ";
    }
    cout<<endl;

}


}