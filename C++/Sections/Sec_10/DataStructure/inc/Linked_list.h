#ifndef Linked_list_h
#define Linked_list_h

template<class T>

class Linked_list
{
private:
    struct Node
    {
        T Item;
        Node* ptr_Next;
    };

    Node* ptr_Top,current;
    
public:
    Linked_list();
    ~Linked_list();

    void Push(T push_element);

    void Pop(T &pop_element);
    void Pop();

    void Print();

    bool is_empty();

};







#endif