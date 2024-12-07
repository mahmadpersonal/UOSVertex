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

    string line, word;
    getline(file, line); 
    while (getline(file, line)) {
        stringstream ss(line);
        getline(ss, word, ','); 

        while (getline(ss, word, ',') && index < SIZE) {
            arr[index++] = word;
        }
    }
    file.close();


    string mostPopularName = "";
    int maxCount = 0;

    for (int i = 0; i < index; i++) {
        int dupCount = 1;
        for (int j = i+1; j < index; j++) {
            if (arr[i] == arr[j]) {
                dupCount++;
            }
        }
        if (dupCount > maxCount) {
            maxCount = dupCount;
            mostPopularName = arr[i];
        }
    }

    cout << "Most Popular Name: " << mostPopularName << " with " << maxCount << " occurrences." << endl;

}