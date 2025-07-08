// Problem Name : Power of Two
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 7/07/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin>>N;
    if(N>0&&(N&(N-1))==0)
    {
       cout<<"YES"<<endl;
    }
    else {
         cout<<"NO"<<endl;

    }

}
