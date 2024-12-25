#include <iostream>
#include <fstream>
#include <unordered_map>
#include <unordered_set>
using namespace std;
int main() {
    ifstream file("friends_dataset.csv");
    if (!file) {
        cout << "Error opening the file!" << endl;
        return 1;
    }

    unordered_map<string, unordered_set<string>> studentFriends;
    string line;

    while (getline(file, line)) {
        string student = "";
        int i = 0;

        while (i < line.size() && line[i] != ',') {
            student += line[i++];
        }

        i++; 
        while (i < line.size()) {
            string friendName = "";
            while (i < line.size() && line[i] != ',') {
                friendName += line[i++];
            }
            if (!friendName.empty()) {
                studentFriends[student].insert(friendName);
            }
            i++;  
        }
    }
    file.close();

    int a;
    cout << "Enter the minimum threshold (alpha) for potential friendships: ";
    cin >> a;

    for (const auto& entry1 : studentFriends) {
        for (const auto& entry2 : studentFriends) {
            const string& student1 = entry1.first;
            const string& student2 = entry2.first;

            if (student1 == student2 || studentFriends[student1].count(student2)) {
                continue;
            }

            int common = 0;
            for (const string& f : studentFriends[student1]) {
                if (studentFriends[student2].count(f)) {
                    common++;
                }
            }

            if (common >= a) {
                cout << student1 << " and " << student2 << " are potential friends with " << common << " common friends.\n";
            }
        }
    }
    return 0;
}