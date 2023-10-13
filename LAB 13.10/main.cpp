#include <iostream>
#include <map>
#include "Dictionary.h"
using namespace std;

int main() 
{
    Dictionary dictionary;
    string word, translation;
    int choice;

    while (true) 
    {
        cout << "1) Add word" << endl;
        cout << "2) Remove word" << endl;
        cout << "3) Edit word" << endl;
        cout << "4) Find word" << endl;
        cout << "5) Display all words" << endl;
        cout << "6) Exit" << endl;

        cout << "\nYour choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) 
        {
        case 1: 
        {
            cout << "Enter the word: ";
            cin >> word;
            cout << "Enter the translation: ";
            cin >> translation;
            dictionary.add(word, translation);
            break;
        }
        case 2: 
        {
            cout << "Enter the word to remove: ";
            cin >> word;
            dictionary.remove(word);
            break;
        }
        case 3:
        {
            cout << "Enter the word to edit: ";
            cin >> word;
            cout << "Enter the new translation: ";
            cin >> translation;
            dictionary.edit(word, translation);
            break;
        }
        case 4: 
        {
            cout << "Enter the word to find: ";
            cin >> word;
            dictionary.find(word);
            break;
        }
        case 5:
        {
            dictionary.display();
            break;
        }
        case 6: 
        {
            cout << "Goodbye!" << endl;
            return 0;
            break;
        }
        default: 
        {
            cout << "Invalid choice" << endl;
            break;
        }
        }
    }
}