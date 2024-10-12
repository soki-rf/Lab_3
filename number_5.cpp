#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int i = 0;
    int cnt = 0;
    while(s[i++] != '\0'){
        cnt++;
    }
    if(cnt % 2 == 0){
        cout << "odd";
    }else{
        cout << "even";
    }
    return 0;
}
