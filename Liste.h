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
        //Constructor to initialize an empty linked list.
        ~LinkedList();
        //Destructor to free the memory occupied by all nodes in the linked list.
        bool isEmpty();
        //Returns true if the linked list is empty, false otherwise.
        bool add (int,T*);
        //Adds a new node with the given data at the specified index.
        bool remove(int);
        //Removes the node at the specified index.
        T* get(int);
        //Retrieves the data at the specified index.
        void display() ;
        //Displays the elements of the linked list.
        int getLength();
        //Returns the length of the linked list.
        bool contains(T*);
        //Checks if the linked list contains a specific element.
        int indexOf(T*);
        //Returns the index of the first occurrence of the specified element.
        T** toArray();
        //Returns an array representation of linked list,
        
};
#endif






