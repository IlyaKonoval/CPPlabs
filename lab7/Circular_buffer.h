#ifndef CPPLABS_CIRCULAR_BUFFER_H
#define CPPLABS_CIRCULAR_BUFFER_H
#include "iostream"

class Circular_buffer {
private:
    T* m_buffer;
    size_t m_capacity;
    size_t m_size;
    size_t m_head;
    size_t m_tail;
public:
    Circular_buffer(size_t capacity = 10) : m_capacity(capacity), m_size(0), m_head(0), m_tail(0) {
        m_buffer = new T[m_capacity];
    }

    ~Circular_buffer() {
        delete[] m_buffer;
    }
};


#endif //CPPLABS_CIRCULAR_BUFFER_H
