#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

    class Solution {
    public:
        void rotateLeft(vector<int>& nums, int k) {
            int n = nums.size();
            k = k % n;
           
            reverse(nums.begin(), nums.end());
            reverse(nums.begin() , nums.begin() + k);
            reverse(nums.end() - k, nums.end());

        }
    };


int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    solution.rotateLeft(nums, k);

    cout << "Array after left rotation by " << k << " steps: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
