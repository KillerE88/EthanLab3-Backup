// EthanLab3-Backup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SList.h"
#include "ItemType.h"

using namespace std;

int main()
{
    ItemType Item;

    SList List;

    cout << "Starting stacked list" << endl;

    Item.Set(2);

    List.Push(Item);

    Item.Set(30);

    List.Push(Item);

    Item.Set(500);

    List.Push(Item);
    
    cout << "Displaying list" << endl;

    List.display();

    cout << "Removing Item" << endl;

    List.Pop();

    cout << "New list" << endl;

    List.display();

    Item.Set(17);

    List.Push(Item);

    Item.Set(88);

    List.Push(Item);

    Item.Set(88);

    List.Push(Item);

    Item.Set(27);

    List.Push(Item);

    Item.Set(19);

    List.Push(Item);

    Item.Set(45);

    List.Push(Item);

    Item.Set(67);

    List.Push(Item);

    Item.Set(47);

    List.Push(Item);

    cout << "Third list" << endl;

    List.display();

    cout << "Top Item" << endl;
    
    List.Top();

    List.isFull();

    if (List.isFull() == true)
    {
        cout << "List is full" << endl;
    }
    else if (List.isFull() == false)
    {
        cout << "There is room left in the list" << endl;
    }
    else 
    {
        cout << "Goodbye" << endl;
    }
}