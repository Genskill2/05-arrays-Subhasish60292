/* Enter your solutions in this file */
#include <stdio.h>
float average(int a[],int l)
{
float total=0;
for(int i=0;i<l;i++)
{
total+=a[i];
}
float r=(float)(total/l);
return r;
}
int factors(int n,int a[])
{
int c=0;
for(int i=2;n>1;i++)
{
while(n%i==0)
{
a[c]=i;
c++;
n=n/i;
}
}
return c;
}
int max(int a[],int l)
{
int k;
int r=a[0];
for(int i=0;i<l;i++)
{
if(a[i]>=r)
{
r=a[i];
}
}
return r;
}
int min(int a[],int l)
{
int r=a[0];
for(int i=0;i<l;i++)
{
if(a[i]<=r)
{
r=a[i];
}
}
return r;
}
int mode(int a[],int l)
{
int b[l];
for(int i=0;i<l;i++)
{
b[i]=0;
}
for(int i=0;i<l;i++)
{
for(int j=0;j<l;j++)
{
if(a[i]==a[j])
{
b[i]+=1;
}
}
}
int z=max(b,l);
return a[z];
}
int max(int a[],int l)
{
int r=a[0];
for(int i=0;i<l;i++)
{
if(a[i]>=r)
{
r=a[i];
}
}
return search(a,l,r);
}
int search(int a[],int l,int k)
{
for(int i=0;i<l;i++)
{
if(a[i]==k)
{
return i;
}
}
return -1;
}
