#include <iostream>

using namespace std;

int main(){
    string s1, s2, s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    int i = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;

    while(s1[i++] != '\0'){
        cnt1++;
    }
    i = 0;
    while(s2[i++] != '\0'){
        cnt2++;
    }
    i = 0;
    while(s3[i++] != '\0'){
        cnt3++;
    }
    cout << cnt1 << " " << cnt2 << " " << cnt3 << endl;
    if((cnt1 > cnt2) && (cnt1 > cnt3)){
        cout << "long = " << s1 << endl;
        if(cnt2 < cnt3){
            cout << "short = " << s2 << endl;
        }else{
            cout << "short = " << s3 << endl;
        }
    } else{
        if((cnt2 > cnt3) && (cnt2 > cnt1)){
            cout << "long = " << s2 << endl;
            if(cnt1 < cnt3){
                cout << "short = " << s1 << endl;
            }else{
                cout << "short = " << s3 << endl;
            }
        } else{
            cout << "long = " << s3 << endl;
            if(cnt1 < cnt2){
                cout << "short = " << s1 << endl;
            }else{
                cout << "short = " << s2 << endl;
            }
        }
    }
    return 0;
}
