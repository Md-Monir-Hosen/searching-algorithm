#include<bits/stdc++.h>
using namespace std;
int interpolationsearch(int a[],int l,int h,int key)
{
    int pos;
    if(h>= l && key >= a[l] && key <= a[h])
    {
        pos = l+double(((h-l)/(a[h]-a[l]))*(key-a[l]));
        if(a[pos]==key)
        {
            return pos;
        }
        else if(a[pos]<key)
        {
           return interpolationsearch(a,pos+1,h,key);
        }
        else
        {
            return interpolationsearch(a,l,pos+1,key);
        }
    }
    return -1;
}
int main()
{
    int a[] = { 10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47 };
    int n = sizeof(a)/sizeof(a[0]);
    int key = 55;
    int index = interpolationsearch(a,0,n-1,key);
    if(index!=-1)
    {
        cout<< "element is found at "<<index;
    }
    else
    {
        cout<<"element is not found";
    }
    return 0;
}
