/*
* Date    : 2019/10/24
* Author  : WANG JINGE
* Email   : wang.j.au@m.titech.ac.jp
* Standard: C++14
*/


// less than 5 rows, recursive implementation
int binarySearch(const vector<int> &nums, int low, int high, int target) {
    if (low > high) return -1;
    int mid = low + (high - low) / 2;
    if (nums[mid] == target) return mid;
    return (nums[mid] > target) ? binarySearch(nums, low, mid - 1, target) : binarySearch(nums, mid + 1, high, target);
}


// Iterative implementation
int binarySearch(const vector<int> &nums, int low, int high, int target) {
    if (low > high) return -1;
    while (low != high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) return mid;
        if (target < nums[mis])
            low = mid - 1;
        else
            high = mid + 1;
    }
    return -1;
}
