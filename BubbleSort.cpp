#include<iostream>
using namespace std;
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
    for(int i = 0 ; i<n-1 ; i++)
    {
        for(int j=0; j<n-1-i ; j++)
        {
            if(arr[j+1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Sorted Array "<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}