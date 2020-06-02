#include <bits/stdc++.h>

using namespace std;


////////////////////////////////////////////////////////////////////////////////////////////

vector<int> func(int arr[],int tar,int sz){
        vector<int> v;
        map<long long,long long> dp;
        for(int i=0;i<sz;i++){
            if(dp[tar-arr[i]]!=0){
              v.push_back(i);
                v.push_back(dp[tar-arr[i]]-1);
              return v;
             }
            dp[arr[i]]=i+1;
        }
        for(int i=1;i<=sz;i++){
            int fin = tar-arr[i-1];
            if(dp[fin]!=0&&dp[fin]!=i){
                v.push_back(i-1);
                v.push_back(dp[fin]-1);
                return v;
            }
        }

        return v;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;////size of array
    int tar;cin>>tar; ///target////
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    vector<int> v = func(arr,tar,n);

    if(v.size()==0)//not possible
     cout<<"not possible";
    else{
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
    }
}
