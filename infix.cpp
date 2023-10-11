// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <cstring>
#include<stack>
#include<string.h>

stack<char> st;
string res;
int prec(char c){
    if(c=='^'){
        return 3;
    }
    if(c=='*' || c=='/'){
        return 2;
    }
    if(c=='+'|| c=='-'){
        return 1;
    }
    return 0;
}
void Convert(char infix[]){
    int len=strlen(infix);
    for(int i=0;i<len;i++){
        char ch=infix[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            res+=ch;
        }
        if(st.empty()){
            if(ch=='*' || ch=='/' ||ch=='+' || ch=='-'){
                st.push(ch);
            }
        }
        if(prec(st.top())>prec(ch)){
            st.pop();
        }
        if(prec(st.top())<prec(ch)){
            st.push(ch);
        }
        
    }
    cout<<res;
}
int main() {
    char infix[]="a*b+c/d";
    Convert(infix);
    
    return 0;
}