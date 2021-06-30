# Begin
Làm Tùm Lum
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int n,a[100];
long ktmang (int a[100],int j)
{
for (long i=1;i<=j;i++)
{
    for (long x=0;x<i;x++)
    {
        if (a[i]==a[x])
        {
            for (long k=i;k<=j;k++)
            {
                a[k]=a[k+1];
                j--;
                i--;
            }
        }
    }
}
return j;
}
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
long ktnt (long n)
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
long ktcmc(int n)
{
    long z,e;
    long d=1;
if (ktnt(n)==1)
   {
       d=0;
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
    d=0;
  else
{
    z=j;
    e=ktmang(a,j);
    if ((e!=z)or(e<3))
    {
            d=0;
            return d;
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
     if (dem==j) d=1; else d=0;
    }
}
}
return d;
}
int main()
{
   freopen("bai14lietkecarmichael.inp","r",stdin);
   freopen("bai14lietkecarmichael.out","w",stdout);
   cin>>n;
   long de=0;
 for (long i=1;i<=n;i++)
 {
     if (ktcmc(i)==1)
        {
            cout<<i<<" ";
            de++;
        }
 }
 if (de==0) cout<<"ko co";
 //cout<<ktcmc(n);
    return 0;
}
