/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>


float average (int[], int);

int
main (void)
{
  int x[] = { 9, 5, 6, 10, 2, -3, 4 };
  assert ((average (x, 7) - 4.7142) < 0.001);

  int y[] = { 5 };
  assert (average (y, 1) == 5.0);
  printf ("Average: passed\n");
}
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
#include <stdio.h>
#include <assert.h>


int factors(int, int []);

int main(void) {
  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  printf("Factors: passed\n");
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
#include <stdio.h>
#include <assert.h>


int max (int[], int);

int
main (void)
{
  int x[] = { 9, 5, 6, 10, 2, -3, 4 };
  assert (max (x, 7) == 10);

  int y[] = { 5 };
  assert (max (y, 1) == 5);
  printf ("Max: passed\n");
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
#include <stdio.h>
#include <assert.h>


int min (int[], int);

int
main (void)
{
  int x[] = { 9, 5, 6, 10, 2, -3, 4 };
  assert (min (x, 7) == -3);

  int y[] = { 5 };
  assert (min (y, 1) == 5);
  printf ("Min: passed\n");
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
#include <stdio.h>
#include <assert.h>


int mode (int[], int);
int max (int[], int);
int search(int[], int, int);

int
main (void)
{
  int x[] = { 4, 9, 5, 6, 5, 10, 0, 2, -3, -3, 4, 4 };
  assert ((mode (x, 12) == 4));

  int y[] = { 5 };
  assert (mode (y, 1) == 5);
  printf ("Mode: passed\n");
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
