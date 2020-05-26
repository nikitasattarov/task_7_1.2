#include <iostream>
#include <set>
#include <fstream>
using namespace std;

int main() {
    int n, k;
    ifstream input;
    input.open("input.txt"); // открываем файл
    input >> n;
    set<int> set_;
    for (int i = 0; i < n; ++i) {
        input >> k;
        if (set_.count(k)) cout << "YES\n"; // если число уже встречалось выводим YES
        else
        {
            cout << "NO\n";
            set_.insert(k);
        }
    }
}
