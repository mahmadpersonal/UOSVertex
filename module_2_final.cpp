#include <iostream>
#include <fstream>      //This library helps to read and write from a file
#include <sstream>      //This library allows us to read string data
#include <unordered_map> //This is a library that allows us to mark the person as a key and his friends as values
#include <set>             //This library automatically ignores duplicate items
using namespace std;
int main()
{
    ifstream file("friends_dataset.csv");
    if(!file.is_open())
    {
        cout<<"Unable to open the file !"<<endl;
        return 1; //This indicated error
    }
                //key       //values
    unordered_map<string, set<string>> friendships;
    string line; //Reads the lanes of the file
    getline(file, line); //skips the header file at first call
    while (getline(file, line))
    {
        stringstream ss(line);  //converts the string into stream for easy reading
        string person, friendName;     //variables to hold person name and friend name 
        getline(ss,person,',');     //gets 1st name as person's name
        while (getline(ss,friendName,','))
        {
            if(!friendName.empty()){
                friendships[person].insert(friendName); //adds the name into that persons friend list
            }
        }

    }
    file.close();
    cout<<"Asymmetric relationships :"<<endl;
    for (const auto&[person,friends]:friendships)
    {
        for (const string friendName:friends)
        {
            if(friendships[friendName].find(person)==friendships[friendName].end())
            cout<<person<<" lists "<<friendName<<" as friend but not vice versa"<<endl;
        }
        
    }
    return 0;
}