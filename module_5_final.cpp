#include <iostream>
#include <fstream>
#include <unordered_map>
#include <unordered_set>
using namespace std;
int main() {
    ifstream file("friends_dataset.csv");
    
    if (!file.is_open()) {
        cout << "Error opening the file!" << endl;
        return 1;
    }

    unordered_map<string, unordered_set<string>> studentFriends;
    string line;

    while (getline(file, line)) {
        string student = "", friendName = "";
        int i = 0;

        while (i < line.size() && line[i] != ',') {
            student += line[i++];
        }

        i++;

        while (i < line.size()) {
            friendName = "";
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

    string students[100];
    int studentCount = 0;

    for (const auto& entry : studentFriends) {
        students[studentCount++] = entry.first;
    }

    for (int i = 0; i < studentCount; i++) {
        for (int j = i + 1; j < studentCount; j++) {
            const string& student1 = students[i];
            const string& student2 = students[j];
            int common = 0;

            for (const string& f : studentFriends[student1]) {
                if (studentFriends[student2].count(f)) {
                    common++;
                }
            }

            if (common > 0) {
                cout << student1 << " and " << student2 << " have " << common << " common friends.\n";
            }
        }
    }

    return 0;
}
