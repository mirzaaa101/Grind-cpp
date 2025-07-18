// 27. Check if a string has balanced parentheses using a stack (manual or array).
#include<iostream>
#include <stack>
using namespace std;

bool isBalancedParentheses(string expr){
    stack<char> st;
    char c, x;

    for(int i=0;i<expr.size();i++){
        c = expr[i];
        if(c == '(' || c == '{' || c == '['){
            st.push(c);
            continue;
        }
        if(st.empty()){
            return false;
        }
        switch(c){
            case ')':
                x = st.top();
                st.pop();
                if(x == '{' || x == '['){
                    return false;
                }
                break;
            case '}':
                x = st.top();
                st.pop();
                if(x == '(' || x == '['){
                    return false;
                }
                break;
            case ']':
                x = st.top();
                st.pop();
                if(x == '(' || x == '{'){
                    return false;
                }
                break;
        }
    }
    return (st.empty());
}

int main(){
    string expr = "{()}[]";

    if (isBalancedParentheses(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}