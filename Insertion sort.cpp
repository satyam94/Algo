#include<iostream>
using namespace std;
void insertion(int[],int);
int main()
{
    int n;
    cout<<"Enter length : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    insertion(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
void insertion(int a[],int n)
{   int min=100000000,temp;
    for(int i=1;i<n;i++)
    {
        for(int j=i;a[j-1]>a[j]&&j>0;j--)
        {
            temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
        }
    }
}
