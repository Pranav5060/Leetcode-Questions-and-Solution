//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    bool fl;
	    int i=0;
	    int j=S.length()-1;
	    
	    while(i<j){
	        if(S[i]==S[j]){
	            fl=true;
	            i++;
	            j--;
	        }
	        else{
	            fl=false;
	            break;
	        }
	    }
	    if(fl){
	        return 1;
	    }
	    else{
	        return 0;
	    }
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends