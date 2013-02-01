#include<iostream>
using namespace std;
int main()
{
    int n,flag=0,t,min,max,mid,temp;
    cout<<"Enter Length : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter no : ";
    cin>>t;
    min=0;
    max=n;
    for(int i=0;min<=max;i++)
    {     mid=(min+max)/2;
          if(t<a[mid])
          {   max=mid-1;
          }
          else if(t>a[mid])
          {          min=mid+1;
          }
          else if(t==a[mid])
          {          flag=1;
                     break;
          }
    }
    if(flag==0)
        cout<<"Number not Found\n";
    else
        cout<<"Found";
}
