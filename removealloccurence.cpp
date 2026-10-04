#include<iostream>
using namespace std;
string removeoccurence(string s , string part){
    while(s.length() > 0 && s.find(part) <s.length()){
        s.erase(s.find(part) , part.length());
    }
    return s;
}
 int main(int argc, char const *argv[])
 {
    string s = "abcabcabcde";
          string part ="ab";
          cout << "the answer is : " << removeoccurence(s,part) << endl;
    return 0;
 }
 