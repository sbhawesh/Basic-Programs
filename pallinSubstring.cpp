#include<bits/stdc++.h>
using namespace std;

void SearchPalindrome(string s1,int low,int high,set<string>&str){
    while(low>=0 && high<s1.length() && s1[high]==s1[low]){
        str.insert(s1.substr(low,high-low+1));
        low--;
        high++;
    }

}
int main(){
    string s1 = "bbabbghioip";
    set<string>str;
    int n=s1.length();
    for(int i=0;i<n;i++){

        SearchPalindrome(s1,i,i,str);
        SearchPalindrome(s1,i,i+1,str);

    }

    for(auto x:str){
        cout<<x<<" ";
    }



return 0;
}
