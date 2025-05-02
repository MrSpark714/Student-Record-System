#include<iostream>
#include<string>
#include<iomanip>
#include<sstream>
#include"spark.hpp"
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
            this->t_marks = t_marks;
        }
        void Set_marks(double marks){
            this->marks = marks;
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
        void Set_grade(string grade){
            this->grade = grade;
        }
        void Set_Percentage(float percentage){
            this->percentage = percentage;
        }
        // void Set_ID(){
        //     string _id = generateStudentID(StudentCount);
        //     this->Unique_ID = _id;
        // }
        void DisplayInfo(){
            cout<<"\t*** Student Information ***\n";
            cout<<"Your Name: "<<name<<endl;
            cout<<"Your Roll #: "<<rollno<<endl;
            cout<<"Your ID: "<<Unique_ID<<endl;
            cout<<"Your Department: "<<department<<endl;
            cout<<"Your Section: "<<section<<endl;
            cout<<"Your Age: "<<age<<endl;
            cout<<"Your Marks("<<t_marks<<"): "<<marks<<endl;
            cout<<"Your Percentage: "<<setprecision(4)<<percentage<<"%"<<endl;
            cout<<"Your Grade: "<<grade<<endl;
            cout<<"Your ID: "<<Unique_ID<<endl;
            cout<<"----------------------------------------------"<<endl;
        }
        Student(){ // defualt Constructor 
            // Unique_ID = generateStudendID(StudentCount);

        }
};
int main(){
    Add_Student();
}
void Add_Student(){
    Student s = Student();
    cout<<"Enter Your Name: ";
    while(1){ //    Input Name
        string _name;
        getline(cin,_name);
        if(!(_name.length() == 0)){
            s.Set_name(_name);
            break;
        }
        else{
            cout<<"Invalid Input! Try Again: ";
        }
    }
    cout<<"Enter Your Age: ";
    while(1){ //    Input Age
        int _age;
        cin>>_age;
        if(!(_age <= 0)){
            s.Set_age(_age);
            break;
        }
        else{
            cout<<"Invalid Input! Try Again: ";
        }
    }
    cout<<"Enter Your Roll #: ";
    while(1){ // Input roll Number
        int _roll;
        cin>>_roll;
        if(!(_roll <= 0)){
            s.Set_rollno(_roll);
            break;
        }
        else{
            cout<<"Invalid Input! Try Again: ";
        }
    }
    cout<<"Enter Your Department: ";
    while(1){ // Input Department
        string dept;
        cin.ignore();
        getline(cin,dept);
        if(!(dept.length() == 0)){
            s.Set_department(dept);
            break;
        }
        else{
            cout<<"Invalid Input! try again: ";
        }
    }
    cout<<"Enter Your Section: ";
    while(1){ // Input Section
        char _section;
        cin>>_section;
        if(!(_section == ' ')){
            s.Set_Section(_section);
            break;
        }
        else{
            cout<<"Invalid Input! Try Again: ";
        }
    }
    cout<<"Enter Your Total Marks: ";
    float B_marks,T_marks;
    while(1){
        cin>>T_marks;
        if(!(T_marks <=0 )){
            s.Set_t_marks(T_marks);
            break;
        }
        else{
            cout<<"Invalid Input! Try Again: ";
        }
    }
    cout<<"Enter Your Obtain Marks: ";
    while(1){
        cin>>B_marks;
        if(!(B_marks <= 0 || B_marks >= T_marks)){
            s.Set_marks(B_marks);
            break;
        }
        else{
            cout<<"Invalid Input! Try Again: ";
        }
    }
    float perc = Percentage(B_marks,T_marks);
    s.Set_Percentage(perc);
    string Grade = Grade_Cal(perc);
    s.Set_grade(Grade);
    // s.Set_ID();
    cout<<"\t *** Student Information Added Sucessfully ***\n";
    s.DisplayInfo();
}