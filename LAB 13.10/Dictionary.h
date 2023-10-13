#pragma once
#include <iostream>
#include <map>
using namespace std;

class Dictionary
{
    map<string, string> data;
public:
    void add(string w, string t) 
    {
        data[w] = t;
        cout << "Word is added" << endl;
    }
    void remove(string w)
    {
        auto finded = data.find(w);

        if (finded != data.end())
        {
            data.erase(finded);
            cout << "Word is removed" << endl;
        }
        else {
            cout << "Word not found" << endl;
        }
    }
    void edit(string w, string t) 
    {
        auto finded = data.find(w);

        if (finded != data.end())
        {
            data[t] = t;
            cout << "Word is edited" << endl;
        }
        else 
        {
            cout << "Word not found" << endl;
        }
    }
    void find(string w) 
    {
        auto finded = data.find(w);

        if (finded != data.end()) 
        {
            cout << "Word found - " << finded->first << ": " << finded->second << endl;
        }
        else 
        {
            cout << "Word not found" << endl;
        }
    }
    void display() 
    {
        bool anyWords = false;
        for (auto finded = data.begin(); finded != data.end(); ++finded) 
        {
            cout << finded->first << ": " << finded->second << endl;
            anyWords = true;
        }
        if (anyWords == false) cout << "There are no words in the dictionary" << endl;
    }
};