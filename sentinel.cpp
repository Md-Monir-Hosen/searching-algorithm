#include<bits/stdc++.h>
using namespace std;
void sentinelLinearSearch(int a[],int n,int key)
{
 int last = a[n-1];

  a[n-1]=key;
   int i=0;

 while(a[i]!=key)
 {
     i++;
 }


 a[n-1]=last;

 ((i<n-1) || (a[n-1]==key)) ? cout<<key <<" is present at "<<i : cout<<key <<" is not found ";

}
int main()
{
    int a[]={10,20,30,40,50};
    int key = 50;
    int n = sizeof(a)/sizeof(a[0]);
    sentinelLinearSearch(a,n,key);
    return 0;
}
