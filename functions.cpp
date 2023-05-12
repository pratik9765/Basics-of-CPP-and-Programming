#include <iostream>
using namespace std;

void print(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    for (int i = 0; i < num; i++)
    {
        cout<<i<<endl;
    }
    

}

int main(){
    print();
    print();
   
    return 0;
}