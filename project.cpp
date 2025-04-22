#include<iostream>
#include<string>
#include<fstream>
using namespace std;

fstream Mian_file("datafile.csv",std::ios::app);

class Student{
    private:
        string name,Class;
        int age;
        double marks;
        char section;
        static int unique_id;
    public:
        string Get_name(){
            return name;
        }

};
int main(){
    cout<<"Pakistan";
}