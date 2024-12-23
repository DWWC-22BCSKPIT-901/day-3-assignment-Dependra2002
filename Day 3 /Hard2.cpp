#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProduct(vector<int>& nums) {
    if (nums.empty()) return 0;

    int max_product = nums[0];  
    int min_product = nums[0];  
    int result = nums[0];       

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < 0) {
    
            swap(max_product, min_product);
        }

    
        max_product = max(nums[i], max_product * nums[i]);
        min_product = min(nums[i], min_product * nums[i]);

    
        result = max(result, max_product);
    }

    return result;
}

int main() {
    
    vector<int> nums = {2, 3, -2, 4};

    
    cout << "Maximum product of contiguous subarray: " << maxProduct(nums) << endl;

    return 0;
}
