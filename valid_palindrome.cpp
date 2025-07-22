
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool isValidPalindrome(string s){
    string cleaned = "";
    for(char c : s){
        if(isalnum(c)){
            cleaned +=tolower(c);
        }
    }
    string reversed = cleaned;
    reverse(reversed.begin(), reversed.end());

    return cleaned == reversed;
}
int main(){
    string input;
    cout<<"Enter string: ";
    getline(cin, input);
    if(isValidPalindrome(input)){
        cout<<"It's a valid palindrome."<<endl;
    }else{
        cout<<"Not a palindrome."<<endl;
    }
    return 0;
}