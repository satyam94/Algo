#include<iostream>
using namespace std;
void merge(int[],int,int);
void mergesort(int[],int,int);
int main()
{   int n;
    cout<<"Enter length : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    mergesort(a,0,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
void mergesort(int a[],int min,int max)
{   int mid=(min+max)/2;
    if(mid>min)
    {   mergesort(a,min,mid);
        mergesort(a,mid,max);
        merge(a,min,max);
    }
}
void merge(int a[],int min,int max)
{   int t[100],s[100],mid=(min+max)/2;
    for(int i=min;i<mid;i++)
        t[i]=a[i];
    for(int i=mid;i<max;i++)
        s[i]=a[i];
    int k=min,l=mid;
    for(int i=min;i<max;i++)
    {   if(t[k]<s[l] && k<mid)
        {   a[i]=t[k];
            k++;
        }
        else if(l<max)
        {   a[i]=s[l];
            l++;
        }
        else
        {
            a[i]=t[k];
            k++;
        }

    }
}
