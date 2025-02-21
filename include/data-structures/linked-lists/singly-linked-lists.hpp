#pragma 

namespace CP {
    struct SNode {
        int data;
        struct SNode* next;
    };
    
    class SLinkedList {
        private:
        SNode* head_;
        SNode* tail_;
        int length_;
    
        public:
        SLinkedList();
        SLinkedList(SNode* head, SNode* tail, int length);
        ~SLinkedList();
    
        void push_front(int data);
    
        void push_back(int data);
    
        void pop_front();
    
        int peek_front();
    
        int length();
    
        bool is_empty();
    
        void print();
    };
}
