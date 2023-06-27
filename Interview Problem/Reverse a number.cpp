Reverse a number. 

#include<iostream>
using namespace std;

int reversenumber(int number){
    int reversed = 0;
    
    while(number != 0) {
        int remainder = number%10;
        reversed = reversed*10 + remainder;
        number/= 10;
    }
    return reversed;
}

int main() {
    int num;
    cout<<"Enter a number to be reversed : ";
    cin>>num;
    int reverse = reversenumber(num);
    cout<<"Reversed Number is : "<<reverse;
    return 0;
}
