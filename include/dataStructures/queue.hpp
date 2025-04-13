#ifndef QUEUE_HPP
#define QUEUE_HPP


#include <cstddef>
#include <stdexcept>

template<typename TData>
class Queue
{
private:
    struct Node
    {
        TData data;
        Node* next;

        explicit Node(const TData& value);
    };

    Node* m_front;
    Node* m_rear;
    size_t m_size;

public:
    Queue();
    ~Queue();

    void enqueue(const TData& value);
    void dequeue();
    TData front() const;
    bool isEmpty() const;
    size_t getSize() const;
};

#endif // QUEUE_HPP
