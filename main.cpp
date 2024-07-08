#include<iostream>
#include<vector>
#include<string>
#include<fstream>
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
    bool canjoinactivity(const student student, const activity&activity);
    void allocateactivity(student&student, activity activity);
    void displaymenu();

    int main() {
        int choice;
        //main loop for user iteration
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
                    return 0;//exit the program
                default: cout << "Invalid choice. Please try again." << endl;
            }
            //function to add a new student 
            void addstudent(){
            student student;
                    cout <<"enter student details:"<<endl;
                    cout<<"firstname:";
                    cin >> student.firstname;
                    cout<<"surname:";
                    cin>> student.surname;
                    cout<<"gender(m/f):";
                    cin>> student.gender;
                    cout<<"age:";
                    cin>> student.age;
                    cout<<"bbit group(1/2/3):";
                    cin>> student.bbitgroup;
                }

                //check if student is willing to participate in clubs/societies
                cout << "enter number of clubs/societies(max 3):";
                int numClubs;
                cin >> numClubs;
                cin.ignore();//clear input buffer


                //loop to get details for chosen clubs/societies
                for (int i = 0; i < numClubs && i < 3; i++) {
                    string club;
                    cout <<"enter club/society"<<i + 1 << ":";
                    getline(cin,club);
                    //adding information of the club to the list of activites of the added student
            }
            //add the student to the structure vector after getting all club choices
            student.push_back(newstudent);
            cout << "student successfully added" << endl;
        }
        void viewstudents(vector<student>& students);
            cout << "\n=== list of students ===" <<endl;
            cout <<"total students:" <<endl;

            cout <<"firstname\tsurname\tgender\tage\tbbitgroup\tsport\tclubs/societies"<<endl;
            for (const auto& student : student) {
                cout <<activity<<endl"";
                cout<< endl;
            }
}
    ofstream file("student_data.csv", ios::app);
    if (file. is_open()) {
        file << fisrtname << " | " << tsurname << " | " << tgender << " | " << tage << " | " << tclubs/societies << " | " << tsport;
        file.close();
        cout << "Student data saved \n";
    } else {
         cout << "Filed to open file for writing \n";
    }
}
void viewstudents() {
    ifstream file ("student_data.csv");
    if (!file.is_open()) {
        cout << "Failed to open file for reading .\n";
        return 0;
    }















