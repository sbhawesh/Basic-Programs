#include<iostream>
using namespace std;

int main(){
    int array[]={2,1,0,10,8,3};
    int n=6,index=0;
    for(int i=0;i<n;i++){
        int temp = array[i];
        index=i;
        int mini = temp;
        for(int j=i+1;j<n;j++){
            if(array[j]<mini){
                mini = array[j];
                index=j;
            }
        }
        array[i]=mini;
        array[index]=temp;
    }

    for(auto x:array){
        cout<<x<<" ";
    }
return 0;
}
