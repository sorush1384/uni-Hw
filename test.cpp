#include <iostream>

using namespace std;

int main() {
    int ages[10], sum = 0;

    cout << "Enter ages of 10 people: ";
    for (int i = 0; i < 10; i++) {
        cin >> ages[i];
        sum += ages[i];
    }

    double avg = sum / 10.0;

    cout << "Average age: " << avg << endl;

    return 0;
}
