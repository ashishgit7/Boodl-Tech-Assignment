#include <bits/stdc++.h>

using namespace std;


////////////////////////////////////////////////////////////////////////////////////////////

bool func(long long num)
{
    long long check=0;
    long long save = num;

    while(save!=0)
    {
        check*=10;

        check += save%10;
        save/=10;

    }

    return check==num;

}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long num;cin>>num;
//    if there is no leading zero
    cout<<func(num);

    ///if there is leading zero as it is not mentioned in assignment that given integer can't have leading zero////
    /*
    string s; cin>>s;
    int n = s.length();

    for(int i=0;i<n/2;i++)
        if(s[i]!=s[n-i-1])
           {
               cout<<false;
               return 0;
           }

      cout<<true;
  */

}
