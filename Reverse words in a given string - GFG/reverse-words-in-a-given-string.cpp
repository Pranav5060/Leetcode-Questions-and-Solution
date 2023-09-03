//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack<string>st;
        string t="";
        for(int i=0;i<S.length();i++){
            t=t+S[i];
            if(S[i]=='.'){
                st.push(t);
                t="";
            }
            if(i==S.length()-1){
                st.push(t+".");
                t="";
            }
        }
        string ans="";
        while(!st.empty()){
            ans=ans+st.top();
            st.pop();
        }
        ans[ans.length()-1]=' ';
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends