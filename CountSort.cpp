#include<iostream>
using namespace std;

void countSort(int arr[], int n)
{
    int k =arr[0];
    // FOR MAX ELEMENT OF THE ARRAY, AS THE SIZE OF THE COUNT ARRAY
    for(int i=0;i<n;i++)
    {
        k= max(k,arr[i]);
    }
    int count[k+1]= {0};
    // COUNTING THE NO OF INDIVIDUAL ELEMENT AND STORING THE COUNT OF EACH NO. AT COUNT ARRAY AS THE ACTUAL NO BEING ITS INDEX
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    // UPDATING THE COUNT ARRAY AS POSTION ARRAY BY ADDING THE PREVIOUS NOS
    for(int i=1;i<=k;i++)
    {
        count[i] += count[i-1];
    }
    int output[n];
    // STORING ALL THE NOS AT ITS ACTUAL POSTION, STARTING WITH LAST ELEMENT
    for(int i=n-1;i>=0;i--)
    {
        output[--count[arr[i]]] = arr[i];
    }
    // OVERWRITING ACTUAL ARRAY WITH SORTED ARRAY 
    for(int i=0;i<n;i++)
    {
        arr[i] = output[i];
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
    countSort(arr,n);
    cout<<"Sorted Array "<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    } 
}