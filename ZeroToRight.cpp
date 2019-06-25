#include<iostream>
using namespace std;

int main(){

    int array[]={1,0,0,0,7,9,9,0,0,1,0};
    int n=11,count=0;

    for(int i=0;i<n;i++){
            if(array[i]!=0){
                array[count++]=array[i];
            }
    }
    for(int i=count;i<n;i++){
        array[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
return 0;
}
