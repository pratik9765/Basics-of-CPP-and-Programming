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
int k;
cout<<"Enter value of k : ";
cin>>k;

for(int i=0; i<k; i++){
    for(int j=0; j<i*2-1;j++){
        if(j%2==0){
            cout<<i;
        }
        else{
            cout<<"*";
        }
    }
        cout<<endl;
}

    for (int i = k-1; i>=0;i--){
        for(int j=0; j<i*2-1;j++){
             if(j%2==0){
            cout<<i;
        }
        else{
            cout<<"*";
        }
        }
        cout<<endl;
    }

    return 0;
}