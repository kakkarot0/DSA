//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int ksmallest(long long A[],long long N,long long k){
        priority_queue<int>maxh;
        for(long long i=0;i<N;i++){
            maxh.push(A[i]);
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        return maxh.top();
    
    }
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        int sum=0;
        long long first= ksmallest(A,N,K1);
        long long second=ksmallest(A,N,K2);
        for(long long i=0;i<N;i++){
            if(A[i]>first && A[i]<second){
                sum+=A[i];
            }
        }
            return sum;
        
    }
};

//{ Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}

// } Driver Code Ends