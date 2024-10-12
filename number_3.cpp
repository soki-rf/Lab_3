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
    int buf;
    vector<int> m = generate_random_vector<int>(20, 1, 30);

    cout << "Na4al'niy massiv: ";
    for(int i=0; i < 20; ++i){
        cout << m[i] << " ";
    }
    cout << endl;

    for(int i=0; i < 3; ++i){
        buf = m[i];
        m[i] = m[20 - 3 + i];
        m[20 - 3 + i] = buf;
    }
    for(int i=0; i < 20; ++i){
        cout << m[i] << " ";
    }
    cout << endl;
    return 0;
}
