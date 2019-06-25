#include<bits/stdc++.h>
using namespace std;
//void mergesort(int*);
void mergearr(int arr[],int l,int mid,int r)
{
    //int nl=sizeof(left)/sizeof(left[0]);
    //int nr=sizeof(right)/sizeof(right[0]);
    int i,j,k;
    int n1=mid-l+1;
    int n2=r-mid;
    int left[n1],right[n2];

    for(i=0;i<n1;i++)
    {
        left[i]=arr[l+i];
    }
    for(j=0;j<n2;j++)
    {
        right[j]=arr[mid+1+j];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
       if(left[i]<=right[j])
       {
           arr[k]=left[i];
           i++;
       }
       else
       {
           arr[k]=right[j];
           j++;
       }
       k++;

    }
    while(i<n1)
    {
        arr[k]=left[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k]=right[j];
        k++;
        j++;
    }

}
void mergesort(int arr[],int l,int r)
{

        if(l<r)
        {

        int mid = l+(r-l)/2;

        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        mergearr(arr,l,mid,r);

        }
}
void printarr(int arr[],int n)
{
    int t;
    for(t=0;t<n;t++)
    {
        cout<<arr[t]<<" ";
    }

}

int main()
{
    int arr[] = {3,1,0,8,6,7};
    int sz=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,sz-1);
    printarr(arr,sz);
    return 0;
}
