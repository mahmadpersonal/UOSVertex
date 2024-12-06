#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    const int SIZE = 240; 
    string arr[SIZE];     
    int index = 0;


    ifstream file("friends_dataset.csv");
    if (!file.is_open()) {
        cout << "Error: Unable to open file." << endl;
        return 1;
    }

}
