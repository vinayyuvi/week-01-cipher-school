#include<iostream>
using namespace std;

int sum(int a, int b);  //function declaration

int main(){
    cout<<sum(2,10);    // function call in cout statement

    return 0;
}

int sum(int a, int b){      // Initialization of function
    return a+b;
}