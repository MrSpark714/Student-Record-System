#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
// #include<fstream>
using namespace std;
static int StudentCount = 1;
void Add_Student();

// fstream Mian_file("datafile.csv",std::ios::app);
class Student{
    private:
        string name,department,grade;
        int age;
        float marks,t_marks,percentage;
        char section;
        int rollno;
        string Unique_ID;
    public:
        // Here Getter function 
        string Get_name(){
            return name;
        }
        int Get_age(){
            return age;
        }
        double Get_marks(){
            return marks;
        }
        char Get_section(){
            return section;
        }
        int Get_rollno(){
            return rollno;
        }
        double Get_t_marks(){
            return t_marks;
        }
        float Percentage(){
            float perc = marks / t_marks * 100;
            percentage = perc;
            return  perc;
        }
        string Grade_cal(){
            if(percentage>=90){
                grade = "A+";
                return "A+";
            } 
            else if(percentage>=80){
                grade = "A";
                return "A";
            }
            else if(percentage>=70){
                grade = "B";
                return "B";	
            }
            else if(percentage>=60){
                grade = "B";
                return "C";
            }
            else if(percentage>=50){
                grade = "D";
                return "D";
            }
            else{
                grade = "F";
                return "F";			
            }
        }
        // Here Setter function 
        void Set_name(string name){
             this->name = name;
        }
        void Set_age(int age){
            if(age >=1){
                this->age = age;
            }
            else{
                cout<<"Invalid Input! Try Again: ";
                return;
            }
        }
        void Set_t_marks(double t_marks){
            if(t_marks >= 0){
                this->t_marks =t_marks;
            }
            else{
                cout<<"Invalid Input! Try Again: ";
                return;
            }
        }
        void Set_marks(double marks){
            if(marks >= 0 || marks <= t_marks){
                this->marks =marks;
            }
            else{
                cout<<"Invalid Input! Try Again: ";
                return;
            }
        }
        void Set_Section(char section){
            this->section = section;
        }
        void Set_rollno(int rollno){
            this->rollno = rollno;
        }
        void Set_department(string department){
            this->department = department;
        }
        string generateStudendID(){
            // StudentCount = 1;
            ostringstream oss;
            oss <<"STD" << 2024 << setw(5) <<setfill('0') << StudentCount++;
            return oss.str();
        }
        void DisplayInfo(){
            cout<<"\t*** Student Information ***\n";
            cout<<"Your Name: "<<name<<endl;
            cout<<"Your Roll #: "<<rollno<<endl;
            cout<<"Your ID: "<<Unique_ID<<endl;
            cout<<"Your Department: "<<department<<endl;
            cout<<"Your Section: "<<section<<endl;
            cout<<"Your Age: "<<age<<endl;
            cout<<"Your Marks("<<t_marks<<"): "<<marks<<endl;
            cout<<"Your Percentage: "<<setprecision(4)<<Percentage()<<"%"<<endl;
            cout<<"Your Grade: "<<Grade_cal()<<endl;
            cout<<"----------------------------------------------"<<endl;
        }
        Student(){ // defualt Constructor 
            Unique_ID = generateStudendID();
        }
};
int main(){
    Add_Student();
}
void Add_Student(){
    Student s = Student();
    s.Set_name("Sohaib");
    s.Set_age(20);
    s.Set_rollno(18);
    s.Set_department("Computer Science");
    s.Set_Section('A');
    s.Set_t_marks(700);
    s.Set_marks(530);
    s.DisplayInfo();
}