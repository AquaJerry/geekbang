/* https://leetcode.com/problems/rotate-array
 * (Easy) 189. Rotate Array
 * Given an array, rotate the array to the right by k steps, where k is
 * non-negative.
 *
 * Example 1:
 * Input: [1,2,3,4,5,6,7] and k = 3
 * Output: [5,6,7,1,2,3,4]
 * Explanation:
 * rotate 1 steps to the right: [7,1,2,3,4,5,6]
 * rotate 2 steps to the right: [6,7,1,2,3,4,5]
 * rotate 3 steps to the right: [5,6,7,1,2,3,4]
 *
 * Example 2:
 * Input: [-1,-100,3,99] and k = 2
 * Output: [3,99,-1,-100]
 * Explanation:
 * rotate 1 steps to the right: [99,-1,-100,3]
 * rotate 2 steps to the right: [3,99,-1,-100]
 *
 * Note:
 * Try to come up as many solutions as you can, there are at least 3 different
 * ways to solve this problem.
 * Could you do it in-place with O(1) extra space?
 */


/* runtime: ms, memory: MB */
void rotate(int *nums, int numsSize, int k) {
  // TODO(aquajerry): implementation
}


/* Test rotate */
#include <assert.h>
#define LEN(array) (sizeof(array) / sizeof*(array))
#define ROTATE(...) \
  { \
    int nums[] = {__VA_ARGS__};
#define BY(_k) \
    int k = _k;
#define SHOULD_BE(...) \
    int expected[] = {__VA_ARGS__}; \
    rotate(nums, LEN(nums), k); \
    for (int i = 0; i < LEN(expected); ++i) assert(expected[i] == nums[i]); \
  }
int main() {
  ROTATE(1, 2, 3, 4, 5, 6, 7) BY(3) SHOULD_BE(5, 6, 7, 1, 2, 3, 4)
  ROTATE(-1, -100, 3, 99) BY(2) SHOULD_BE(3, 99, -1, -100)
}
