#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string &str){
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed == str;
    
}
int main() {
    string str = "pop";
    if(ispalindrome(str)){
        cout<<"It is a palindrome !";
    }
    else{
        cout<<"Not a palindrome !";
    }
}
