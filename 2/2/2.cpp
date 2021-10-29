#include <iostream>

using namespace std;
int* Arr(int n) {
    int* pArr = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Element[" << i + 1 << "] = ";
        cin >> pArr[i];
    }
    return pArr;

}


int main() {
    int n, a;
    a = 0;
    cout << "The number of elements in the array N = ";
    cin >> n;
    if (n < 0) {
        cout << "N should be a positive number" << endl;
    }
    else {
        int* pArr = Arr(n);
        for (int i = 0; i < n; i++) {
            if (pArr[i] < 0) {
                a++;
            }


        }
        cout << "The number of negative elements is " << a;

        delete[] pArr;
    }
    return 0;
}
