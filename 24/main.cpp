#include <iostream>

using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x), next(NULL) { }
};

class Solution{
public:
    ListNode* swapPairs(ListNode* head){
        ListNode* back = new ListNode(0);
        back->next = head;
        ListNode* current = back;

//        while (!head->next)
//            return head;

        while(current->next && current->next->next) {
            auto temp = current->next->next;
            auto forward = current->next;

            forward->next = temp->next;
            temp->next = forward;
            current->next = temp;

            current = current->next->next;
        }
            return back->next;
    }
};


int main() {
    auto head = new ListNode(1);
    auto current = head;
    for(auto i = 2; i < 7; i++){
        current->next = new ListNode(i);
        current = current->next;
    }

    Solution sol;
    auto temp = sol.swapPairs(head);
    while(temp){
        cout << temp->val << " -> ";
        temp = temp->next;
    }

    return 0;
}