#include<iostream>
using namespace std;
//Observing Time Complexity

/*bool binarySearch1(int *array,int n,int x){   //without recursion
    int low=0;
    int high=n-1;
    int mid;
    bool flag=false;
    while(low<(high-1)){
        mid= (high+low)/2;
        if(x>array[mid]){
            low=mid;
        }
        if(x<array[mid]){
            high=mid;
        }
        if(x==array[mid]){
            flag=true;
            break;
        }

    }
    return flag;
}

void LinearSearch(int *array,int n,int x){   //Linear Search
    int flag=0;
    for(int i=0;i<n;i++){
        if(x==array[i])
            flag=1;
    }
    if(flag==1){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
}
*/

bool binarySearch2(int *array,int low,int high,int x){
    int mid;
    if(low<=high){
        mid = (high+low)/2;
        if(x==array[mid])
            return true;

        if(x>array[mid])
            return binarySearch2(array,mid+1,high,x);
        if(x<array[mid])
            return binarySearch2(array,low,mid-1,x);
    }
    return false;

}
int main(){

    int array[] = {1,8,10,18,52,100,100,110,120,200};
    int n = sizeof(array)/sizeof(array[0]);
    int x;
    cin>>x;
    /*if(binarySearch1(array,n,x)){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
    */

    if(binarySearch2(array,0,n-1,x)){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
   // LinearSearch(array,n,x);
return 0;
}
