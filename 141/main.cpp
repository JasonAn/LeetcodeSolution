#include <iostream>

// Definition for singly-linked list.
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


class Solution {
public:
    bool hasCycle(ListNode *head) {

        ListNode *ptr1 = head, *ptr2;

        if (!ptr1 || !ptr1->next)
            return false;
        else
            ptr2 = ptr1->next;

        while(ptr2){

            if(ptr1 == ptr2)
                return true;
            else{
                ptr1 = ptr1->next;
                if (ptr2->next == nullptr || ptr2->next->next == nullptr)
                    return false;
                else
                    ptr2 = ptr2->next->next;
            }
        }

        return false;
    }
};


int main() {
    Solution a;
    ListNode *S = new ListNode(0);
    ListNode *head = S;

    for (auto i = 1; i < 4; i++) {
        S->next = new ListNode(i);
        S = S->next;
    }

    //S->next = head->next;
    S = head;

//    for (auto i = 0; S; i++) {
//        cout << S->val << " ";
//        S = S->next;
//    }

    cout << a.hasCycle(head);

    return 0;
}