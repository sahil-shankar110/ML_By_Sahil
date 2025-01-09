#include <iostream>
#include <map>
#include <string>
using namespace std;

// Define a structure to store student information
struct Student {
    string fatherName;
    int rollnumber;
    int age;
    string department;
    float entryTestScore;
    float cpn;
    string district;
};

// Function to display student information
void displayStudentInfo(const Student &student) {
    cout << "Father's Name: " << student.fatherName << endl;
    cout<<"roll number: "<<student.rollnumber<<endl;
    cout<<"Batch   :   24BSAI"<<endl;
    cout << "Age: " << student.age << endl;
    cout << "department: " << student.department << endl;
    cout << "Entry Test Score: " << student.entryTestScore << endl;
    cout << "CPN: " << student.cpn << endl;
    cout << "District: " << student.district << endl;
}

int main() {
    // Create a map to store students with name as the key
    map<string, Student> students;

    // Add some students to the system
    students["Khalil"] ={"Abdul Rauf", 2, 18,"Artificial Intelligence,",60,72.99,"Dadu"};
    students["Masab"]= {"Muhammad Musa",3,18,"Artificial Intelligence",65,73.2,"Tharparkar"};
    students["Aftab"]={"Akhtar Ali",6,20,"Artificial Intelligence",50,59.60,"Thatta"};
    students["Jawad"]={"Faiz Muhammad",7,18,"Artificial Intelligence",59,69.72,"Dadu"};
    students["Cr Bhai"]={"Syed Asalam ",10,18,"Artificial Intelligence",65,73.23,"Mirpurkhaas"};
    students["Sahil Shankar"] = {"Shankar Das", 18 ,18, "Artificial Intelligence", 72, 77.86, "Sanghar"};
    students["Bilal"]={"Liaqat Ali",20,19,"Artificial Intelligence",70,75.10,"Badin"};
    students["Safeer"]={"Abdul Qadir",22,18,"Artificial Intelligence",74,79.2,"Matiari"};
    students["Kamran Hyder"]={"Zaigham Abbas",23,19,"Artificial Intelligence",75,79,"Matiari"};
    students["Syed Mudassir"]={"Syed Mehar Ali Shah ",26,18,"Artificial Intelligence",58,68.4,"Sujawal"};
    students["Abdul Quddus"]={"Ghulam Murtaza",27,18,"Artificial Intelligence",50,62,"Badin"};
    students["Syed Muhammad Qasim"]={"Syed Muhammad Asif",29,17,"Artificial Intelligence",73,75.57,"Jamshoro"};
    students["Sadiq"]={"Jawed Ahmed",33,19,"Artificial Intelligence",63,71.1,"Nawabshah"};
    students["Kumail Abbas"]={"Shahnawaz",35,17,"Artificial Intelligence",61,67.01,"Hyderabad"};
    students["Mursaleen"]={"Noor MUhammad",39,19,"Artificial Intelligence",53,63,"T.Allahyar"};
    students["Zahid Hussain"] = {"Rasheed Ahmed ",41, 18, "Artificial Intelligence", 55, 68.3, "Kamber Shahdadkot"};
    students["Mayur"]={"Ravee Shankar",48,18,"Artificial Intelligence",65,71,"Umerkot (U.K)"};
    students["Syed Alam Shah"]={"Syed Fahad Shah",49,18,"Artificial Intelligence",55,63.97,"Thatta"};
    students["Umer"]={"Rafique Bhutto",50,19,"Artificial Intelligence",47,63.76,"Shikarpur"};
    students["Shaheer"]={"Amjad",52,19,"Artificial Intelligence",79,77.4,"Hyderabad"};
    students["Ahsan" ] = {"Ahmed Ali",53, 19, "Artificial Intelligence", 68, 74.32, "Larkana"};

    string searchName;
    cout << "Enter student name to search: ";
    getline(cin, searchName);
	int serachrollno;
	cout<<"enter roll no :";
	getline (cin>>searchrolln);
    // Search for the student in the map
    if (students.find(searchName) != students.end()) {
        cout << "\nStudent Information:\n";
        displayStudentInfo(students[searchName]);
    if (students.find(searchRollno) != students.end()){
    	cout<<"\nstudent information:\n";
    	displayStudentInfo(students[searchRollno]);
	}    
    } else {
        cout << "Student not found.\n";
}

return 0;
}
