#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

string sentence = "this is the code which finds unique and duplicate words. this code is developed by bhawesh";
string word="";
map<string,int>mp;
map<string, int>::iterator it;

for(auto x: sentence){
    if(x == ' '){
        /*if(mp.empty()){
            mp.insert(pair<string,int>(word,1));
        }*/
        if(mp.find(word)!=mp.end()){
            //pair exists
            mp[word]=2;

        }
        else{
            mp.insert(pair<string,int>(word,1));
        }
        word="";
    }
    else{
        if(x != '.'){
        word = word+x;
        }
    }
}
//cout<<word;
if(mp.find(word)!=mp.end()){
            //pair exists
            mp[word]=2;

        }
        else{
            mp.insert(pair<string,int>(word,1));
        }

for(it=mp.begin();it!=mp.end();it++){
    if(it->second==1){
        cout<<"Unique"<<" "<<it->first<<endl;
    }
    else{
        cout<<"Duplicate"<<" "<<it->first<<endl;
    }
}

return 0;
}
