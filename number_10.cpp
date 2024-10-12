#include <iostream>

using namespace std;

int main(){
    string s;
    int i, cnt, cnt2;
    cout << "Enter string:" << endl;
    cin >> s;
    cnt = 0;
    cnt2 = 0;
    i = 0;
    while(s[i++] != '\0'){
        cnt2++;
        if(s[i] == 'a'){
            cnt++;
        }
    }

    cout << double(cnt*1.0/cnt2) * 100 << "%";
    return 0;
}
