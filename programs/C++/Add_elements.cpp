#include<iostream>

using namespace std;

int main()
{
    int num_elem;
    cout<<"Enter number of element: ";
    cin>>num_elem;
    int arr[num_elem];
    for(int i=0;i<num_elem;i++) cin>>arr[i];
    int sum=0;
    for(int i=0;i<num_elem;i++) sum=sum+arr[i];
    cout<<"Sum is: "<<sum;
}