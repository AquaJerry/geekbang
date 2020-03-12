/* https://leetcode.com/problems/merge-two-sorted-lists
 * (Easy) 21. Merge Two Sorted Lists
 * Merge two sorted linked lists and return it as a new list. The new list
 * should be made by splicing together the nodes of the first two lists.
 *
 * Example:
 * Input: 1->2->4, 1->3->4
 * Output: 1->1->2->3->4->4
 */


struct ListNode {
  int val;
  struct ListNode *next;
};


/* runtime: ms, memory: MB */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
  // TODO(aquajerry): implementation
}


/* Test mergeTwoLists */
#include <assert.h>
#define LEN(array) (sizeof(array) / sizeof*(array))
#define MERGE(...) \
  { \
    int v1[] = {__VA_ARGS__}, i = LEN(v1); \
    struct ListNode l1[i]; \
    l1[i].val = v1[--i], l1[i].next = 0; \
    while (i) l1[--i].next = l1 + i, l1[i].val = v1[i];
#define AND(...) \
    int v2[] = {__VA_ARGS__}; \
    struct ListNode l2[i = LEN(v2)]; \
    l2[i].val = v2[--i], l2[i].next = 0; \
    while (i) l2[--i].next = l2 + i, l2[i].val = v2[i]; \
    struct ListNode *node = mergeTwoLists(l1, l2);
#define SHOULD_BE(...) \
    int v[] = {__VA_ARGS__}; \
    for (i = -1; ++i < LEN(v); node = node->next) assert(v[i] == node->val); \
  }
int main() {
  MERGE(1, 2, 4) AND(1, 3, 4) SHOULD_BE(1, 1, 2, 3, 4, 4)
}
