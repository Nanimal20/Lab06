#include "Tree.h"
#include "Node.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

using namespace std;
int main(){

    Tree<string> tree2;

    tree2.Insert("Red");
    tree2.Insert("Blue");
    tree2.Insert("Red");

    int size2 = tree2.Size();

    cout << "tree(2) was created!" << endl;
    cout << "The tree(2)'s size is: " << size2 <<endl;

    if(!(tree2.Find("Blue") = nullptr))
    {
        cout << "The tree(2) has a blue seed!" << endl;
    }

    vector<string> values2 = tree2.GetAllAsc();

    cout << "The tree(3)'s contains: " <<endl;
    for (int i = 0; i < values2.size(); i++)
    {
        if(i < values2.size() - 1)
        {
            cout << values2.at(i) << ", ";;
        }
        else
        {
        cout << values2.at(i);
        }
    }
    cout << endl;

    Tree<string> tree3;

    tree3.Insert("Red");
    tree3.Insert("Blue");
    tree3.Insert("Green");

    int size3 = tree3.Size();

    cout << "tree(3) was created!" << endl;
    cout << "The tree(3)'s size is: " << size3 <<endl;

    vector<string> values3 = tree3.GetAllAsc();

    cout << "The tree(3)'s contains: " <<endl;
    for (int i = 0; i < values3.size(); i++)
    {
        if(i < values3.size() - 1)
        {
            cout << values3.at(i) << ", ";;
        }
        else
        {
        cout << values3.at(i);
        }
    }
    cout << endl;


    
    return 0;
}