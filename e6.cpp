#include<iostream>
using namespace std;
int main()
{
    int arr[50], size, i, j, k, element, index;
    cout<<"Enter Array Size: "<<endl;
    cin>>size;
    cout<<"Enter  Array Elements: "<<endl;
    for(i=0; i<size; i++)
        cin>>arr[i];
    for(i=1; i<size; i++)
    {
        element = arr[i];
        if(element<arr[i-1])
        {
            for(j=0; j<=i; j++)
            {
                if(element<arr[j])
                {
                    index = j;
                    for(k=i; k>j; k--)
                        arr[k] = arr[k-1];
                    break;
                }
            }
        }
        else
            continue;
        arr[index] = element;
    }
    cout<<"\nSorted Array:\n"<<endl;
    for(i=0; i<size; i++)
        cout<<arr[i]<<endl;

}
