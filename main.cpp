#include<iostream>
#include<vector>
#include<string>
using namespace std;

    //how the students are represented
    struct student {
        string firstname;
        string surname;
        string gender;
        int age;
        string bbitgroup;
        vector<string> activities;
    };
    // how the activities are to be represented
    struct activity {
        string name;
        int capacity;
        int malenumber=0;
        int femalenumber=0;
        vector<student> enrolledstudents;
    };

    //how to store all students, clubs&societies and sports
    vector<activity> sports = {{"Rugby", 20}, {"Athletics", 20}, {"Swimming", 20}, {"Soccer", 20}};
    vector<activity> Club = {{"Journalism Club", 60}, {"Red Cross Society", 60}, {"AISEC", 60}, {"Business Club", 60}, {"Computer Science Club", 60}
        };

    void displaymenu();
    void addstudents();
    void viewstudents();
    void viewclubs();
    void viewsports();
    void enrolledstudents();
    void savealldata();
    bool canjoinactivity(student student, activity&activity);
    void allocateactivity(student&student, activity activity);
    void displaymenu();

    int main() {
        int choice;
        while (true) {
            displaymenu();
            cin >> choice;
            switch (choice) {
                case 1: addstudents();
                break;
                case 2: viewstudents();
                break;
                case 3: viewclubs();
                break;
                case 4: viewsports();
                break;
                case 5: enrolledstudents();
                break;
                case 6: savealldata();
                break;
                case 7:
                    return 0;
                default: cout << "Invalid choice. Please try again." << endl;
            }
        }
        return 0;
    }
















