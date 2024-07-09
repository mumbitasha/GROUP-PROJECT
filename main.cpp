#include<iostream>
#include<vector>
#include<string>

using namespace std;

    //how the students are represented
    struct student {
        string firstname;
        string surname;
        char gender;
        int age;
        int bbitgroup;
        vector<string> activities;
};
      const vector<string> sports = {"Rugby", "Athletics", "Swimming", "Soccer"};
      const vector<string> clubs = {"Journalism Club", "Red Cross Society", "AISEC", "Business Club", "Computer Science Club"};
vector<Student> group1;
vector<Student> group2;
vector<Student> group3;

vector<Student> rugby, athletics, swimming, soccer;
vector<Student> journalismClub, redCrossSociety, aiesec, businessClub, computerScienceClub;
   // Function to check gender constraints
bool checkGenderConstraint(const vector<Student>& activityList, char gender, int maxPercentage) {
    int count = 0;
    for (const auto& student : activityList) {
        if (student.gender == gender) {
            count++;
        }
    }
    return count <= (activityList.size() * maxPercentage / 100);
}
// Function to add a student to an activity
bool addStudentToActivity(vector<Student>& activityList, const Student& student, int maxCapacity, int maxGenderPercentage) {
    if (activityList.size() < maxCapacity && checkGenderConstraint(activityList, student.gender, maxGenderPercentage)) {
        activityList.push_back(student);
        return true;
    }
    return false;
    }

void allocateActivities(Student& student) {
    srand(time(0));
    
    // Allocate sport
    bool allocatedSport = false;
    if (rand() % 2 == 0) { // 50% chance to participate in a sport
        for (const string& sport : sports) {
            if (sport == "Rugby" && addStudentToActivity(rugby, student, 20, 75)) {
                student.activities.push_back(sport);
                allocatedSport = true;
                break;
} else if (sport == "Athletics" && addStudentToActivity(athletics, student, 20, 75)) {
                student.activities.push_back(sport);
                allocatedSport = true;
                break;
            } else if (sport == "Swimming" && addStudentToActivity(swimming, student, 20, 75)) {
                student.activities.push_back(sport);
                allocatedSport = true;
                break;
            } else if (sport == "Soccer" && addStudentToActivity(soccer, student, 20, 75)) {
                student.activities.push_back(sport);
                allocatedSport = true;
                break;
            }
        }
    }
 // Allocate clubs
    int clubCount = allocatedSport ? 2 : 3;
    for (int i = 0; i < clubCount; ++i) {
        for (const string& club : clubs) {
            if (club == "Journalism Club" && addStudentToActivity(journalismClub, student, 60, 50)) {
                student.activities.push_back(club);
                break;
            } else if (club == "Red Cross Society" && addStudentToActivity(redCrossSociety, student, 60, 50)) {
                student.activities.push_back(club);
                break;
        }
    }
}

void addStudent() {
    Student student;
    cout << "Enter first name: ";
    cin >> student.firstName;
    cout << "Enter surname: ";
    cin >> student.surname;
    cout << "Enter gender (M/F): ";
    cin >> student.gender;
    cout << "Enter age: ";
    cin >> student.age;
    cout << "Enter group (1, 2, 3): ";
    cin >> student.group;

    allocateActivities(student);

    switch(student.group) {
        case 1: group1.push_back(student); break;
        case 2: group2.push_back(student); break;
        case 3: group3.push_back(student); break;
        default: cout << "Invalid group!" << endl;
    }
}

void printStudentActivities(const vector<Student>& group) {
    for (const auto& student : group) {
        cout << "Student: " << student.firstName << " " << student.surname << ", Gender: " << student.gender << ", Age: " << student.age << ", Group: " << student.group << ", Activities: ";
        for (const auto& activity : student.activities) {
            cout << activity << " ";
        }
        cout << endl;
    }
}

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
        }
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
                if (!allocateactivity(student, sports)){
                    if (!allocateactivity(student, club)){ 
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















