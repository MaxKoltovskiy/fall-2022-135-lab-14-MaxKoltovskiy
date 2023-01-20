#pragma once
#include <iostream>
#include <string>

template <class T>
class MyVector{
    public:
        MyVector();
        int size();
        int capacity();
        bool empty();
        void push_back(T item);
        void pop_back(int n);
        void pop_back();
        void clear();
        T &operator[] (int n);
    private:
        T* data;
        int v_size;
        int v_capacity;
};

#include "MyVector.cxx"