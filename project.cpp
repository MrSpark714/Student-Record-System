#include<iostream>
#include<string>
// #include<fstream>
using namespace std;

// fstream Mian_file("datafile.csv",std::ios::app);

class Student{
    private:
        string name,Class;
        int age;
        double marks;
        char section;
        static int unique_id;
        int id;
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
        int Get_id(){
            return id;
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
        void Set_marks(double marks){
            if(marks >= 0 || marks <= 100){
                this->marks =marks;
            }
            else{
                cout<<"Invalid Input! Try Again: ";
                return;
            }
        }



};
Student :: Student(){ // defualt Constructor 
    unique_id = 1;
    id = unique_id;
    unique_id++;
}
int main(){
    Student s1();
}