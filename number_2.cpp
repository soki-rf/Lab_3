#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

using namespace std;

template<class T>
vector<T> generate_random_vector(size_t num, T min = -10, T max = 10)
{
    random_device rd;
    mt19937 e2(rd());
    uniform_real_distribution<> dist(min, max);

    auto lambda = [&e2, &dist] () -> T { return dist(e2); };

    vector<T> result(num);
    generate_n(result.begin(), num, lambda);
    return result;
}


int main(){
    vector<int> m = generate_random_vector<int>(10, 1, 30);
    int sm, sm_2, sm_6, k1, k2, sm_k, s1, s2, sm_s;
    sm = 0;
    sm_2 = 0;
    sm_6 = 0;
    sm_k = 0;
    sm_s = 0;
    cout << "Na4al'niy massiv: ";
    for(int i=0; i < 10; ++i){
        cout << m[i] << " ";
    }
    cout << endl;

    for(int i=0; i < 10; ++i){
        sm += m[i];
        sm_2 += m[i] * m[i];
    }
    cout << "Summa vseh elementov = " << sm << endl;
    cout << "Summa vseh kvadratov elementov = " << sm_2 << endl;

    for(int i=0; i < 6; ++i){
        sm_6 += m[i];
    }
    cout << "Summa pervih 6-ti elementov = " << sm_6 << endl;
    cout << endl;

    cout << "Enter k1 and k2, but  k1 < k2  and  1 <= k1 < k2 <= 10" << endl;
    cin >> k1;
    cin >> k2;
    for(int i = k1 - 1; i < k2; ++i){
        sm_k += m[i];
    }
    cout << "Summa c k1 po k2 = " << sm_k << endl;
    cout << endl;

    cout << "Srednee arifmeti4eskoe vseh elementov = " << double(sm*1.0 / 10) << endl;
    cout << endl;

    cout << "Enter s1 and s2, but  s1 < s2  and  1 <= s1 < s2 <= 10" << endl;
    cin >> s1;
    cin >> s2;
    for(int i = s1 - 1; i < s2; ++i){
        sm_s += m[i];
    }
    cout << "Srednee arifmeti4eskoe na otrezke [s1;s2] = " << double(sm_s*1.0 / (s2 - s1 + 1)) << endl;
    return 0;
}
