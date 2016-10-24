#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int residue = 0;

        ListNode * ans = new ListNode(0);
        ListNode * head = ans;

        while (l1 && l2){
            head->next = new ListNode((l1->val + l2->val + residue)%10);
            residue = (l1->val + l2->val + residue) / 10;
            l1 = l1->next;
            l2 = l2->next;
            head = head->next;
        }

        while (l1){
            head->next = new ListNode((l1->val + residue)%10);
            residue = (l1->val + residue) / 10;
            l1 = l1->next;
            head = head->next;
        }

        while (l2){
            head->next = new ListNode((l2->val + residue)%10);
            residue = (l2->val + residue) / 10;
            l2 = l2->next;
            head = head->next;
        }

        if(residue > 0)
            head->next = new ListNode(residue);

        return ans->next;

    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}