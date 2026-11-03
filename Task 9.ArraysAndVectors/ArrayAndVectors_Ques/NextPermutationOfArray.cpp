#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// MAIN FUNCTION
void Permutation(vector<int>& nums) {
    int n = nums.size();
    int idx = -1;

    // FINDING PIVOT
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            idx = i;
            break;
        }
    }

    // IF ARRAY IS ALREADY GREATEST
    if (idx == -1) {
        reverse(nums.begin(), nums.end());
        return;
    }

    // FINDING JUST GREATER ELEMENT THAN nums[idx]
    int j = -1;
    for (int i = n - 1; i > idx; i--) {
        if (nums[i] > nums[idx]) {
            j = i;
            break;
        }
    }

    // SWAP nums[idx] AND nums[j]
    swap(nums[idx], nums[j]);

    // REVERSE THE SUFFIX
    reverse(nums.begin() + idx + 1, nums.end());
}

int main() {
    vector<int> vec = {1, 5, 7, 6};

    display(vec);
    Permutation(vec);
    display(vec);

    return 0;
}