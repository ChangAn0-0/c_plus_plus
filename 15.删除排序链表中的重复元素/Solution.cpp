/*83. 删除排序链表中的重复元素
简单
909
相关企业
给定一个已排序的链表的头 head ， 删除所有重复的元素，使每个元素只出现一次 。返回 已排序的链表 。

 

示例 1：


输入：head = [1,1,2]
输出：[1,2]
示例 2：


输入：head = [1,1,2,3,3]
输出：[1,2,3]*/

#include <iostream>
using namespace std;

 struct ListNode {
    int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

 class Solution {
 public:
     ListNode* deleteDuplicates(ListNode* head) {
         if (head == NULL)
             return head;
         ListNode* i = head;
         ListNode* j = i->next;
         while (j != NULL) {
             if (i->val == j->val) {
                 i->next = j->next;
                 j = j->next;
             }
             else {
                 i = i->next;
                 j = j->next;
             }
         }
         return head;
     }
 };


 class Solution {
 public:
     ListNode* deleteDuplicates(ListNode* head) {
         if (nullptr == head || nullptr == head->next) {
             return head;
         }

         head->next = deleteDuplicates(head->next);
         return head->val == head->next->val ? head->next : head;
     }
 };
