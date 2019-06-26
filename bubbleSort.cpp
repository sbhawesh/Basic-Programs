#include<iostream>
using namespace std;

int main(){

    int array[]={2,1,0,6,3,10};
    int n=6;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

    for(auto x:array){
        cout<<x<<" ";
    }
return 0;
}
