//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int running_sum=0;
        int j=0;
        vector<int> v = {-1};
        vector<int> v1 = {-1,-1};
        if(s==0)
        {
            return v;
        }
        for(int i=0; i<n; i++)
        {
            running_sum += arr[i]; 
            
            while(running_sum>s)
            {
                running_sum -= arr[j];
                j++;
                if(running_sum==s)
                {

                    break;
                }
            }
            
            if(running_sum==s)
            {
                v1[0]=j+1;
                v1[1]=i+1;
                return v1;
            }
        }
        
        return v;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends