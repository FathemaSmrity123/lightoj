#include<bits/stdc++.h>
using namespace std;
long long int a[1000];
int main()
{
    int test;
    scanf("%d",&test);
    for(int j=1;j<=test;j++){
    int coun=0;
    long long int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            coun++;
        sum=sum^a[i];
    }
    if(coun==n)
    {
        if(n%2==0)
            cout<<"Case "<<j<<": Alice"<<endl;
        else
            cout<<"Case "<<j<<": Bob"<<endl;
    }
    else{
        if(sum==0)
            cout<<"Case "<<j<<": Bob"<<endl;

        else
           cout<<"Case "<<j<<": Alice"<<endl;
    }
    }

    return 0;
}
