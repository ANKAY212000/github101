#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    int temp;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    for(int j=1;j<n-i;j++)
    {
        if(a[j-1]>a[j])
        {
            temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
        }
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}