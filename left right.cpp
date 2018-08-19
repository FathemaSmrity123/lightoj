#include<bits/stdc++.h>
using namespace std;
long long int a[100000];
int main()
{
    int test,k;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        scanf("%d",&k);
        for(int j=1;j<=2*k;j++)
        {
            scanf("%lld",&a[j]);
        }
        long long int sum=0;
        for(int j=1;j<=2*k;j+=2)
        {
            int p=(a[j+1]-a[j])-1;
            sum=sum^p;
        }
        if(sum<=0)
          printf("Case %d: Bob\n",i);
        else
          printf("Case %d: Alice\n",i);

    }
    return 0;
}
