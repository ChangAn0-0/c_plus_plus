/*83. ɾ�����������е��ظ�Ԫ��
��
909
�����ҵ
����һ��������������ͷ head �� ɾ�������ظ���Ԫ�أ�ʹÿ��Ԫ��ֻ����һ�� ������ ����������� ��

 

ʾ�� 1��


���룺head = [1,1,2]
�����[1,2]
ʾ�� 2��


���룺head = [1,1,2,3,3]
�����[1,2,3]*/

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
