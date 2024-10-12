#include <iostream>

using namespace std;

int main(){
    string s, s2;
    int i, cnt;
    s2 = "";
    cin >> s;
    i = 0;
    cnt = 0;
    while(s[i++] != '\0'){
        cnt++;
    }
    for(i=0; i < cnt; ++i){
        s2 += "*";
    }
    s = s2 + s + s2;
    cout << s;

    return 0;
}
