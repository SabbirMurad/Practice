#include<iostream>
#include<vector>
#include<string>
#include<map>
#include <bits/stdc++.h>
using namespace std;
int longestPalindrome(vector<string>& words) {
        map <string ,int> myMap;
        for(auto word : words){
            if(myMap.count(word)==0){
                myMap[word]=1;
            }
            else{
                myMap[word]++;
            }
        }
        string palindrome="";
        bool singleMidElementDone=false;
        for(auto word : words){
            string reversed=word;
            reverse(reversed.begin(),reversed.end());
            if(word[0]==word[1]){
                if(myMap[word]>1){
                    palindrome=word+palindrome+word;
                    myMap[word]=myMap[word]-2;
                }
                else if(!singleMidElementDone && myMap[word]>0){
                    string s=palindrome.substr(palindrome.size()/2);
                    palindrome=palindrome.substr(0,palindrome.size()/2);
                    palindrome+=word+s;
                    singleMidElementDone=true;
                }
            }
            else if(myMap.count(reversed)>0){
                if(myMap[reversed]>0 && myMap[word]>0){
                    palindrome=word+palindrome+reversed;
                    myMap[word]--;
                    myMap[reversed]--;
                }
            }
            cout<<palindrome<<endl;
        }
        return palindrome.size();
    }
int main(){
  vector<string> words={"bb","bb"};
  longestPalindrome(words);
}
