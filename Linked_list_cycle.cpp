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

bool hasCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast!=NULL && (fast->next!=NULL)) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast) {
            return true;
        }
    }
    return false;
}