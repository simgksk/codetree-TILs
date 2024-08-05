#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, ans1, ans2;
    cin >> str1 >> str2;

    for(int i = 0; i < str1.length(); i++){
        if (str1[i] >= '0' && str1[i] <= '9') {
            ans1 += str1[i];
        }
    }

    for(int i = 0; i < str2.length(); i++){
        if (str2[i] >= '0' && str2[i] <= '9') {
            ans2 += str2[i];
        }
    }

    cout << stoi(ans1) + stoi(ans2);
    
    return 0;
}