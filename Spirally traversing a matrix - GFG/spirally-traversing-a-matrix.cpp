//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int>ans;
        int total=r*c;
        int count=0;
        int sr=0,sc=0,er=r-1,ec=c-1;
        while(total>count){
            for(int i=sc;total>count&&i<=ec;i++){
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            for(int i=sr;total>count&&i<=er;i++){
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
            for(int i=ec;total>count&&i>=sc;i--){
                ans.push_back(matrix[er][i]);
                count++;
            }
            er--;
            for(int i=er;total>count&&i>=sr;i--){
                ans.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
            
            
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends