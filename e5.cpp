#include<iostream>
#include<string>
using namespace std;
int main()
{
    int sec,secm,max,min,arr[50],i,n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    if(arr[0]<arr[1])
    {
        max=arr[1];
        sec=arr[0];
    }
    else
    {
        max=arr[0];
        sec=arr[1];
    }
    for(i=2;i<n;i++)
    {
        if(arr[i]>max)
        {
            sec=max;
            max=arr[i];
        }
        else if(arr[i]>sec && arr[i]!=sec)

        {
         sec=arr[i];
        }

    }
    cout<<"second largest element"<<sec<<endl;
    if(arr[0]>arr[1])
    {
        min=arr[1];
        secm=arr[0];
    }
    else
    {
        min=arr[0];
        secm=arr[1];
    }
    for(i=2;i<n;i++)
    {
        if(arr[i]<min)
        {
            secm=min;
            min=arr[i];
        }
        else if(arr[i]<secm && arr[i]!=secm)

        {
         secm=arr[i];
        }

    }
    cout<<"second smallest element"<<secm<<endl;
}
