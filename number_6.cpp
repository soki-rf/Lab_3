#include <iostream>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int i = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    while(s1[i++] != '\0'){
        cnt1++;
    }

    i = 0;
    while(s2[i++] != '\0'){
        cnt2++;
    }

    if(cnt1 > cnt2){
        cout << "first";
    }else{
        if (cnt1 < cnt2){
            cout << "second";
        }else{
            cout << "same";
        }

    }
    return 0;
}
