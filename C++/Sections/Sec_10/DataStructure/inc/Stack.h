// constexpr int MAX_SIZE=100;

template<class stack_type,int MAX_SIZE=100>
class Stack {
private:
    int top;
    stack_type item[MAX_SIZE];

public:
    Stack();
    ~Stack();

    bool is_empty();

    void push(stack_type element);
    void pop();

    void print();
    

    
};