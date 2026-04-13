#include <iostream>
using namespace std;

int main() {
    int n;           //ENTER NUMBER
    
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int num = i;

        for(int j = 1; j <= n; j++) {
            cout << num;
            num++;
        }

        cout << endl;
    }

    return 0;
}