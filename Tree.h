#pragma once

#include <memory>
#include <iostream>
#include <vector>
#include "Node.h"

using namespace std;

template <class C> 
class Tree
{
public:
    Tree();
    ~Tree();

    shared_ptr<Node<C>> Insert(C);
    shared_ptr<Node<C>> Find(C);

    int Size() const;
    vector<C> GetAllAsc();

    void Clear();

protected:
    int Size(shared_ptr<Node<C>>) const;

    shared_ptr<Node<C>> Insert(shared_ptr<Node<C>>, C);
    shared_ptr<Node<C>> Find(shared_ptr<Node<C>>, C);
    vector<C> GetAllAsc(shared_ptr<Node<C>>);

private: 
    shared_ptr<Node<C>> root;

};
#include "Tree.cpp"