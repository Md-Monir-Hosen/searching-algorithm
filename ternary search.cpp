#include<bits/stdc++.h>
using namespace std;
int ternarysearch(int l,int r,int a[],int key)
{
    while(r >= l)
  {
          int mid1,mid2;
    mid1= l+(r-1)/3;
    mid2=r-(r-l)/3;
    if(a[mid1]==key)
        return mid1;
    if(a[mid2]==key)
        return mid2;


    if(key < a[mid1])
    {
        return ternarysearch(l,mid1-1,a,key);
    }
    else if(key>a[mid2])
    {
        return ternarysearch(mid2+1,r,a,key);
    }
    else
    {
        return ternarysearch(mid1+1,mid2-1,a,key);
    }
  }
  return -1;
}
int main()
{
    int a[]={1,2,3,4,5},key=3;

    int p = ternarysearch(0,4,a,key);
    (p=-1) ? cout<<"element is not found" : cout<<"element is found at "<<p;
    return 0;

}
