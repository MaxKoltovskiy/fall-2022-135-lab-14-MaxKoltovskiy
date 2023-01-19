#pragma once
#include <iostream>

template <class T>
class MyVector{
    public:
        MyVector();
        int size();
        int capacity();
        bool empty();
    private:
        T* data;
        int v_size;
        int v_capacity;
};

#include "MyVector.cxx"