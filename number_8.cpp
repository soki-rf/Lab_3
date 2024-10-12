#include <iostream>

using namespace std;

int main(){
    string s;
    int i, m, n;
    cout << "Enter string:" << endl;
    cin >> s;
    cout << "Enter m and n, but 1 <= m < n <= lenght s:";
    cin >> m;
    cin >> n;

    for(i = m - 1; i < n; ++i){
        cout << s[i];
    }
    
    return 0;
}
