#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++)
    {
        arr1[i] = arr[l+i]; 
    }
    for(int i=0;i<n2;i++)
    {
        arr2[i] = arr[mid+1+i]; 
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i<n1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j<n2)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
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
    int l = 0;
    int r = n-1; 
    mergeSort(arr,l,r);
    cout<<"Sorted Array "<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}