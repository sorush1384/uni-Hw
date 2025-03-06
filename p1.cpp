#include <iostream>

using namespace std;

int main() {
    int nums[4] = {7, 15, 3, 10};
    
    int max = nums[0], min = nums[0];

    for (int i = 1; i < 4; i++) {
        if (nums[i] > max) max = nums[i];
        if (nums[i] < min) min = nums[i];
    }

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    return 0;
}
