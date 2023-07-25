//in this we have to reverse words in a sentance 

#include <bits/stdc++.h>
using namespace std;

void reverse(string &str) {
    int i = 0, j = str.length()-1;
    while (i < j) {
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
}

int main(){
    string a = "asd asdf asdf";
    // getline(cin,a);
    string temp = "";
    vector<string> b;
    int i = 0;
    while(i<a.size()){
         if(a[i]==' '){
            b.push_back(temp);
            temp = "";
            i++;
         } else {
            temp += a[i];
            i++;
         }
    }
    b.push_back(temp);
    
    for (int i = 0; i < b.size(); i++) {
        reverse(b[i]);
        // cout << word << endl;
    }
    for(int i=0;i<b.size();i++){
        cout<<b[i]<< " ";
    }
    return 0;
}