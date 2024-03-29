//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        long long start=0;
        long long end=v.size()-1;
        long long a=-1;
        long long b=-1;
        
        while(start<=end){
            long long mid=start+(end-start)/2;
            if(v[mid]==x){
                
                a=mid;
                end=mid-1;
            }
            else if(v[mid]>x)end=mid-1;
            else start=mid+1;
        }
        
         start=0;
         end=v.size()-1;
       
        
        while(start<=end){
            long long mid=start+(end-start)/2;
            if(v[mid]==x){
                
                b=mid;
                start=mid+1;
            }
            else if(v[mid]>x)end=mid-1;
            else start=mid+1;
        }
        return {a,b};
        
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
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends