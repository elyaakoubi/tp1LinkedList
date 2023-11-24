#ifndef LISTE_H
#define  LISTE_H

#include<iostream>
using namespace std;

template <typename T>
struct Node
{
    T* data;
    Node <T>* next;
    
    Node(T* data){
    	this->data=data;
	}
    
    ~Node<T>(){
    	delete data;
	}
};

template <typename T>
class LinkedList
{
    private:
        Node<T>* first;
        int length;

    public:
        LinkedList();
        ~LinkedList();
        bool isEmpty();
        bool add (int,T*);
        bool remove(int);
        T* get(int);
        void display() ;
        int getLength();
        bool contains(T*);
        
};
#endif






