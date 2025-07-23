
#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s){
    stack<char> st;
    for(char c : s){
        if(c == '(' || c == '{' || c == '['){
            st.push(c);
        }else {
            if(st.empty()) return false;
            char top = st.top();
            if((c == ')' && top != '(') ||
               (c == '}' && top != '{') ||
            (c == ']' && top != '[')){
                return false;
            }
            st.pop();
        }
    }
    return st.empty();  // all open brackets must be closed
}

int main(){
    string s;
    cout << "Enter string: ";
    cin >> s;

    if(isValid(s)){
        cout << "Valid" << endl;
    }else{
        cout << "Invalid" << endl;
    }
    return 0;
}