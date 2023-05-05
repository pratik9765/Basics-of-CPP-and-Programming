#include <iostream>
using namespace std;

int main(){

    
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



//       * 
//      * *
//     * * *
//    * * * *
//   * * * * *
//  * * * * * *
// int rows=6;
// for (int i = 0; i < rows; i++)
// {
//     for (int j = 0; j < rows - i; j++)
//     {
//         cout<<" ";
//     }

//     for (int k = 0; k < i+1; k++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;

// }


// *****
// *****
// *****
// *****
// *****

// int k;
// cout<<"Enter value of k : ";
// cin>>k;

// for (int i = 0; i < k; i++)
// {
//     for(int j=0; j<k; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }



// ******
// *    *
// *    *
// *    *
// *    *
// ******
// int k;
// cout<<"Enter value of k : ";
// cin>>k;

// for(int i=0;i<k;i++){
//     for(int j=0;j<k;j++){
//         if(i==0 || i==k-1 || j==0 || j==k-1){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//         cout<<endl;
// }





// *******
// *    *
// *   *
// *  *
// * *
// **
// *

// int k;
// cout<<"Enter value of k : ";
// cin>>k;

// for(int i=0;i<k;i++){
//     for(int j=0;j<k-i;j++){
//         if(i==0 || j==0 || j==k-i-1){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }




//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * * 
//     *

// int k;
// cout<<"Enter value of k : ";
// cin>>k;
// // pyramid
// for(int i=0;i<k;i++){
//     for(int j=0;j<k-i-1;j++){
//         cout<<" ";
//     }

//     for(int j=0;j<i+1;j++){
//         cout<<"* ";
//     }
// cout<<endl;
// }

// // inverted pyramid
// for(int i=0; i<k;i++){
//     for(int j=0;j<i;j++){
//         cout<<" ";
//     }

//     for(int j=0;j<k-i;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }




//      *
//     * *
//    *   *
//   *     *
//  *       *
// *         *
// *         *
//  *       *
//   *     *
//    *   *
//     * *
//      *

// int k;
// cout<<"Enter value of k : ";
// cin>>k;
// // pyramid
// for(int i=0;i<k;i++){
//     for(int j=0;j<k-i-1;j++){
//         cout<<" ";
//     }

//     for(int j=0;j<(i*2)+1;j++){
//         if(j==0 || j==i*2){
//         cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
// cout<<endl;
// }

// // inverted pyramid
// for(int i=0; i<k;i++){
//     for(int j=0;j<i;j++){
//         cout<<" ";
//     }

//     for(int j=0;j<((k-i)*2)-1;j++){
//         if(j==0 || j==((k-i)*2)-2){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }




// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****

// int k;
// cout<<"Enter value of k : ";
// cin>>k;


// for (int i = 0; i < k; i++){

//     for (int j = 0; j < k-i; j++)
//     {
//         cout<<"*";
//     }

//     for (int j = 0; j < i*2 + 1 ; j++)
//     {
//         cout<<" ";
//     }

//     for(int j=0; j<k-i;j++){
//         cout<<"*";
//     }
    
    
// cout<<endl;
// }

// for(int i=0;i<k;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<"*";
//     }

//     for(int j=0;j<(k-i)*2-1;j++){
//         cout<<" ";
//     }

//     for(int j=0;j<i+1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }




// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1
// int k;
// cout<<"Enter value of k : ";
// cin>>k;

// for(int i=0; i<k; i++){
//     for(int j=0; j<i*2-1;j++){
//         if(j%2==0){
//             cout<<i;
//         }
//         else{
//             cout<<"*";
//         }
//     }
//         cout<<endl;
// }

//     for (int i = k-1; i>=0;i--){
//         for(int j=0; j<i*2-1;j++){
//              if(j%2==0){
//             cout<<i;
//         }
//         else{
//             cout<<"*";
//         }
//         }
//         cout<<endl;
//     }





// 1
// 121
// 12321
// 1234321
// 123454321

// int k;
// cout<<"Enter value of k : ";
// cin>>k;
// for(int i=0; i< k; i++){
//     int j;
//     for(j=0;j<i+1;j++){
//         int ans = j+1;
//         char ch=ans+'A' -1;
//         cout<<ch;
//     }
//     j=j-1;
//     for (; j >=1; j--)
//     {
//          int ans = j;
//         char ch=ans+'A' -1;
//         cout<<ch;
//     }
    
//     cout<<endl;
// }




//     1
//    232
//   34543
//  4567654
// 567898765

//  int k;
// cout<<"Enter value of k : ";
// cin>>k;

// for(int i=0;i<k;i++){
//     for(int j=0;j<k-i-1;j++){
//         cout<<" ";
//     }
//     int j;
//     for(j=0;j<i+1;j++){
//         cout<<i+1+j;
//     }
//     j--;
//     for(;j>0;j--){
//         cout<<i+j;
//     }
//     cout<<endl;
// }



//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5

int k;
cout<<"Enter value of k : ";
cin>>k;

for(int i=0;i<k;i++){
    for(int j=0;j<k-1-i;j++){
        cout<<" ";
    }

    int count=1;
    for (int j = 0; j <i*2+1; j++){
        if(i==0 || i== k-1){
            if(j%2==0){
                cout<<count;
                count++;
            }   
            else{
                cout<<" ";
            } 
        }
        else{
            if(j==0){
                cout<<1;
            }
            else if (j==2*i){
                cout<<i+1;                
            }
            else{
                cout<<" ";
            }
        }
        
    }
    cout<<endl;
    
}











    return 0;
}