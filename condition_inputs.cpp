#include <iostream>;
using namespace std;

int main(){

    int score;
    printf("Please enter marks :\n");
    cin>>score;

    // if-else conditions

    // if(score>=90){
    //     printf("Pass with A grade");
    // }
    // else if(score>=75)
    // {
    //     printf("Pass with B grade");
    // }
    // else
    // {
    //     printf("Pass with c grade");
    // }


    // ternary operator

    (score > 90 ? (cout<<"Pass with A grade") : (score>75 ? (cout<<"Pass with B grade"):(score > 50 ? (cout<<"Pass with c grade"):(cout<<"Fail"))));
    
    


    return 0;
}