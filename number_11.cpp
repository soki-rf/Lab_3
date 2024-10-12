#include <iostream>

using namespace std;

int main(){
    string s, et, s_new;
    et = "Can you can a can as a canner can can a can?";
    s_new = "";
    int i, cnt, k;
    k = 2;
    cout << "Enter newWord:" << endl;
    cin >> s;
    cnt = 0;
    i = 0;
    while(et[i++] != '\0'){
        cnt++;
    }
    for (i = 0; i < cnt - 3; i++){
        if((et[i] == 'c' || et[i] == 'C') && et[i + 1] == 'a' && et[i + 2] == 'n')
        {
            s_new += s;
            k = 2;
        }else{
            if(k > 0){
                k -= 1;
            }
            else{
                s_new += et[i];
            }
        }
    }

    cout << s_new;
    return 0;
}
