#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*int Unarr[]={2,1,0,10,8,3},arrsorted[6];
    int n=6;
    arrsorted[0]=Unarr[0];
    int j;
    for(int i=1;i<n;i++)
    {
             j=i;
            arrsorted[i]=Unarr[i];
        while(arrsorted[j]<arrsorted[j-1] && j!=0)
        {

            int temp;
            temp=arrsorted[j];
            arrsorted[j]=arrsorted[j-1];
            arrsorted[j-1]=temp;
           j--;

        }

     }

    for(int i=0;i<n;i++)
    {
        cout<<arrsorted[i]<<" ";
    }*/

    int array[] = {2,1,0,10,8,3};
    int n=6;
    for(int i=1;i<n;i++){
        int temp = array[i];
        int j=i-1;
        while(array[j]>temp && j>=0){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }

    for(auto x:array){
        cout<<x<<" ";
    }
    return 0;
}
