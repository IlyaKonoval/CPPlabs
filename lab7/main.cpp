#include <iostream>
#include "Circular_buffer.h"
#include "Circular_buffer.cpp"
int main() {
    CircularBuffer<int>buffer(10);
    buffer.push_back(1);
    buffer.push_back(2);
    buffer.push_front(0);
    for (size_t i = 0; i < buffer.size(); ++i) {
        std::cout << buffer[i] << " ";

    }
    return 0;
}