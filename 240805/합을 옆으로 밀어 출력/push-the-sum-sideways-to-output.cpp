#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int num;
    int sum = 0;

    cin >> n;

    while(n--){
        cin >> num;
        sum += num;
    }

    string str = to_string(sum);

    for (int i = 1; i < str.length(); i++) {
        cout << str[i];
    }
    cout << str[0];

    return 0;
}