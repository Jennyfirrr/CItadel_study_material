#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> nums = {1, 5, 7, 3, 2, 10, 20, 5, 5};

vector<vector<int>> twoPointer(vector<int> nums) {
  sort(nums.begin(), nums.end());

  int left = 0;
  int right = nums.size() - 1;
  int target = 10;

  vector<vector<int>> result;

  while (left < right) {
    int current = nums[left] + nums[right];

    if (current == target) {
      result.push_back({nums[left], nums[right]});
      left++;
    } else if (current < target) {
      left += 1;
    } else {
      right -= 1;
    }
  }
  return result;
};

int main() {
  vector<int> nums = {1, 5, 7, 3, 2, 10, 20, 5, 5};

  vector<vector<int>> results = twoPointer(nums);

  for (size_t i = 0; i < results.size(); i++) {
    cout << "[" << results[i][0] << " , " << results[i][1] << "]" << endl;
  }

  return 0;
};
