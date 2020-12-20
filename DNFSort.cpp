#include<iostream>
using namespace std;

void swap(int arr[],int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void DNFSort(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr,low,mid);
            mid++;
            low++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr,mid,high);
            high--;
        }
        
    }
}
int main()
{
    int n;
    cout<<"Enter the n- "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the Array "<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    DNFSort(arr,n);
    cout<<"Sorted Array "<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    } 
}