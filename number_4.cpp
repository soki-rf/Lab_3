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
    int k;
    k = 0;
    vector<int> m = generate_random_vector<int>(10, -30, 30);
    vector<int> a, b;
    cout << "Na4al'niy massiv: ";
    for(int i=0; i < 10; ++i){
        cout << m[i] << " ";
    }
    cout << endl;

    for(int i=0; i < 10; ++i){
        if(m[i] < 0 && k == 0){
            k++;
        }else{
            a.push_back(m[i]);
        }
    }

    for(int i=0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
    cout << endl;
    k = 0;
    for(int i = 9; i >= 0; --i){
        if(m[i] % 2 == 0 && k == 0){
            k++;
        }else{
            b.push_back(m[i]);
        }
    }

    for(int i = 8; i >= 0; --i){
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}
