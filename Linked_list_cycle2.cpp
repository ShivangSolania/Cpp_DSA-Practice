#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <algorithm>
using namespace std;

ListNode *detectCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;
    bool isCycle = false;
    while (fast!=NULL && (fast->next!=NULL)) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow==fast) {
            isCycle = true;
            break;
        }
    }

    if (!isCycle) {
        return NULL;
    }
    slow = head;
    //ListNode* prev;
    while(slow!=fast) {
        slow = slow->next;
        //prev = fast;
        fast = fast->next;
    }
    //prev->next = NULL;  TO REMOVE CYCLE
    return slow;
}