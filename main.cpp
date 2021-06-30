#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int n,a[100],z,e;
/////////////////////////////////////////////
long ktmang (int a[100],int j)
{
 for (long i=0;i<j;i++)
    {
        long d=a[i];
    for (long x=i+1;x<j;x++)
    {
        if (a[x]==d)
            {
                a[x]=0;
            }
    }
    }
    long dem=0;
    for (long i=0;i<=j;i++)
    {
        if (a[i]!=0) dem++;
}
return dem;
}
//////////////////////////////////////////////
long ucln(int a, int b)
{
     while (b>0)
    {
        long r=a%b;
        a=b;
        b=r;
    }
  return a;
}
////////////////////////////////////////////////
long ktnt (int n)
{
  long d=1;
  if(n<2)
    {
     d=0;
    }
  long dem=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n % i == 0)
        {
            dem++;
        }
    }
    if (dem==0) d=1; else d=0;
    return d;
}
/////////////////////////////////////////
int main()
{
   freopen("KTcarmichael.inp","r",stdin);
   freopen("KTcarmichael.out","w",stdout);
   cin>>n;
   if (ktnt(n)==1)
   {
       cout<<"ko là carmichael";
   }
else
{
    long j=0,dem=0;
    long m=n;
    for (long i=2;i<=m;i++)
{
         if ((ktnt(i)==1))
       {
           while (n%i==0)
          {
            j=j+1;
            a[j]=i;
            //cout<<i<<endl;
            n=n/i;
          }
       }
    if (n==1) break;
}
  if (j==0)
    cout<<"ko là so carmichael";
  else
{
    z=j;
    e=ktmang(a,j);
    if ((e!=j)or(e<3))
        {
            cout<<"ko là so carmichael";
            return 0;
        }
    else
   {
        for (long i=1;i<=j;i++)
         {
             long thg=(m-1)%(a[i]-1);
             if (thg==0)
             {
              dem++;
             }
        }
     if (dem==j) cout<<"co la so carmichael"; else cout<<"ko là so carmichael";
    }
}
}
    return 0;
}
