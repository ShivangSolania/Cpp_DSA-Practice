#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

    public:
    List() {
        head = tail = NULL;   
    }

    void push_front(int val) { //TC = O(1)
        Node* newNode = new Node(val);
        if(head==NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void printLL() { //O(N)
        Node* temp = head;

        while (temp != NULL) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void push_back(int val) { //TC = O(1), IF WE DONT HAVE TAIL THEN ITS O(N)
        Node* newNode = new Node(val);

        if (head==NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front() { //TC = O(1)
        if (head==NULL) {
            cout<<"LL is empty"<<endl;
            return;
        }
        
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back() { //TC = O(N)
        if (head==NULL) {
            cout<<"LL is empty"<<endl;
            return;
        }

        Node* temp = head;
        while(temp->next!=tail) {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
    }

    void insert(int val, int pos) { //O(N)
        if (pos<0) {
            cout<<"Invalid position"<<endl;
            return;
        }

        if (pos==0) {
            push_front(val);
            return;
        }
        Node* temp = head;
        for (int i=0; i<pos; i++) {
            if (temp==NULL) {
                cout<<"Invalid pos\n";
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int search(int key) { //O(N)
        Node* temp = head;
        int idx=0;

        while(temp!=NULL) {
            if(temp->data==key) {
                return idx;
            }

            temp = temp->next;
            idx++;
        }
        return -1;
    }
};

int main() {
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(0);
    ll.printLL();
    ll.insert(5,2);
    ll.printLL();
    cout<<ll.search(3)<<endl;
    return 0;
}