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


int main()
{
    vector<int> m = generate_random_vector<int>(10, 10, 50);
    int a, f;
    cout << "Enter 'a'" << endl;
    cin >> a;

    cout << "Na4al'niy massiv: ";
    for(int i=0; i < 10; ++i){
        cout << m[i] << " ";
    }
    cout << endl;


    for(int i=0; i < 10; ++i){
        m[i] *= 2;
    }
    cout << "V 2 raza bol'she: ";
    for(int i=0; i < 10; ++i){
        cout << m[i] << " ";
    }
    cout << endl;


    for(int i=0; i < 10; ++i){
        m[i] -= a;
    }
    cout << "m[i] - a: ";
    for(int i=0; i < 10; ++i){
        cout << m[i] << " ";
    }
    cout << endl;

    f = m[0];
    cout << "Vse elementi podelili na m[0] = " << f << ": ";
    for(int i=0; i < 10; ++i){
        cout << double(m[i]*(1.0)/f) << " ";
    }

    return 0;
}
