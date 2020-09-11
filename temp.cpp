#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

vector<string> divi(const string& str);

const size_t NUM = 5;
int main()
{
    ifstream fin("names.txt");    
    string name;
    vector<string>names;
    
    if(!fin.is_open())
    {
        cerr << "file-openning failed" << endl;
        return 1; 
    }

    while(!fin.eof())
    {
        getline(fin, name, ',');
        names.push_back(name);
    }
    
    for(size_t i = 0; i < names.size(); i ++)
    {
        cout << i + 1 << ": " <<  names[i] << endl;
    }
    
    return 0;
}

