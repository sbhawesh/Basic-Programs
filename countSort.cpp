#include<bits/stdc++.h>
using namespace std;

void countSort(int *array,int n){
    int mx;
    mx=array[0];
    for(int i=1;i<n;i++){
        if(array[i]>mx){
            mx=array[i];
        }
    }
    int counta[mx+1];
    int sorted[n+1];
    memset(counta,0,sizeof(counta));
    for(int i=0;i<n;i++){
        counta[array[i]]+=1;
    }
    for(int i=1;i<=mx;i++){
        counta[i]=counta[i-1]+counta[i];
    }
    for(int i=0;i<n;i++){
        sorted[counta[array[i]]]=array[i];
        counta[array[i]]--;
    }
    for(int i=1;i<=n;i++){
        cout<<sorted[i]<<" ";
    }


}

int main(){
    int array[] = {2,1,4,5,2};
    int n = sizeof(array)/sizeof(array[0]);

    countSort(array,n);

return 0;
}
