#include<iostream>
using namespace std;
int partitionArr(int arr[],int i,int j)
{
    /*
    int part[j+1];
    int pivot = arr[i],count=0,l=0;
    for(int k=0;k<=j;k++)
    {
        if(arr[k]>=pivot){
            part[l++]=arr[k];
            count++;
        }

    }


    int mid = count-1;
    for(int s=0;s<=j;s++)
    {
        if(arr[s]<pivot)
        {
            part[count++]=arr[s];
        }
    }
    part[i]=part[i+mid];
    part[i+mid]=pivot;

    for(int k=0;k<=j;k++)
    {
        arr[k]=part[k];
    }
    return mid;
    */
    int pivot,left=i;
     pivot=arr[left];
     while(i<j)
     {
       while((i<j) && (arr[i]<pivot))i++;
       while((i<j) && (arr[j]>=pivot))j--;

     if(i<j)
            {
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
}
     if(arr[j]<=pivot)
        return j;
     else
        return j-1;
}
void qsort(int arr[],int i,int j)
{
    int mid;
    if(i>=j)
    return;

    mid = partitionArr(arr,i,j);
    qsort(arr,i,mid-1);
    qsort(arr,mid+1,j);


}

int main()
{
    int arr[] = {2,4,1,9,6,6,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    qsort(arr,0,size-1);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}






