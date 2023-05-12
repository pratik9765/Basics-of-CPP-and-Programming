#include <iostream>
using namespace std;

 int main(){
    int num;
    cout<<"enter a number between 1 to 4 : ";
    cin>>num;

    switch(num){
        case 1:
            cout<<"You entered 1";
            break;
        case 2:
            cout<<"You entered 2";
            break;
        case 3:
            cout<<"You entered 3";
            break;
        case 4:
            cout<<"You entered 4";
            break;  
        default:
            cout<<"Please enter proper number";              
    }
    





    return 0;
 }