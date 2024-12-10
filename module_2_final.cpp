#include <iostream>
#include <fstream>      //This library helps to read and write from a file
#include <sstream>      //This library allows us to read string data
#include <unordered_map> //This is a library that allows us to mark the person as a key and his friends as values
#include <set>             //This library automatically ignores duplicate items
using namespace std;
int main()
{
    ifstream file("friends_dataset.csv")
    if (!file.is_open())
    {
        cout<<"Unable to open the file !"<<endl;
        return 1; //This indicated error
    }
                //key       //values
    unordered_map<string, set<string>>friendships;

    

}