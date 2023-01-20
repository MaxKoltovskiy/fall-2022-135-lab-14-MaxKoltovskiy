#include "MyVector.h"

template <class T>
MyVector<T>::MyVector() {
    data = new T[10];
    v_size = 0;
    v_capacity = 10;
}

template <class T>
int MyVector<T>::size() {
    return v_size;
}

template <class T>
int MyVector<T>::capacity() {
    return v_capacity;
}

template <class T>
bool MyVector<T>::empty() {
    return v_size == 0;
}

template <class T>
void MyVector<T>::push_back(T item) {
    if(v_size == v_capacity) {
        v_capacity += 10;
        T* new_data = new T[v_capacity];
        for(int i = 0; i< v_size; i++) {
            new_data[i] = data[i];
        }
        data = new_data;
        new_data = nullptr;
    }

    data[v_size] = item;
    v_size++;
}

template <class T>
void MyVector<T>::pop_back(int n) {
    for(int i = 0; i < n; i++) {
        data[v_size-1] = 0;
        v_size--;
    }
}

template <class T>
void MyVector<T>::pop_back() {
    pop_back(1);
}

template <class T>
void MyVector<T>::clear() {
    for(int i = 0; i< v_size; i++) {
        data[i] = 0;
    }
    v_size = 0;
}
template <class T>
T &MyVector<T>::operator[] (int n) {
    return data[n];
}
