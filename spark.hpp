#ifndef SPARK_HPP
#define SPARK_HPP

#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>

float Percentage(float Marks,float Total_Marks){
    return (Marks / Total_Marks) * 100;
}

std::string Grade_Cal(float percentage){
    if(percentage>=90){
        return "A+";
    } 
    else if(percentage>=80){
        return "A";
    }
    else if(percentage>=70){
        return "B";	
    }
    else if(percentage>=60){
        return "C";
    }
    else if(percentage>=50){
        return "D";
    }
    else{
        return "F";			
    }
}
// std::string generateStudentID(int _Studentcount){
//     ostringstream oss;
//     oss <<"STD" << 2024 << setw(5) << setfill('0') <<_Studentcount++;
//     return oss.str();
// }

#endif