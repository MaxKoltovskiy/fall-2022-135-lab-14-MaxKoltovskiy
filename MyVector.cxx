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
