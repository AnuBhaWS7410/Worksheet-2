//Program to calculate the total and average marks of a student and display the grade using OOP
#include<iostream>
using namespace std;
class Student{
    string name;
    int sub1Marks, sub2Marks, sub3Marks, totalMarks;
    float averageMarks;
    public:
    void getDataName(){
        cout<<"Enter your name: "<<endl;
        getline(cin,name);
    }
    void getDataSub1(){
        cout<<"Enter your marks in subject one: "<<endl;
        cin>>sub1Marks;
    }
    void marksCheckSub1(){
        while(sub1Marks < 0 || sub1Marks > 100){
            if(sub1Marks<0){
                cout<<"The mark you entered for subject 1 is under 0."<<endl;
                getDataSub1();
            }
            if(sub1Marks>100){
                cout<<"The mark you entered for subject 1 is above 100."<<endl;
                getDataSub1();
            }
        }
    }
    void getDataSub2(){
        cout<<"Enter your marks in subject two: "<<endl;
        cin>>sub2Marks;
    }
    void marksCheckSub2(){
        while(sub2Marks < 0 || sub2Marks > 100){
            if(sub2Marks<0){
                cout<<"The mark you entered for subject 2 is under 0."<<endl;
                getDataSub2();
            }
            if(sub2Marks>100){
                cout<<"The mark you entered for subject 2 is above 100."<<endl;
                getDataSub2();
            }
        }
    }
    void getDataSub3(){
        cout<<"Enter your marks in subject three: "<<endl;
        cin>>sub3Marks;
    }
    void marksCheckSub3(){
        while(sub3Marks < 0 || sub3Marks > 100){
            if(sub3Marks<0){
                cout<<"The mark you entered for subject 3 is under 0."<<endl;
                getDataSub3();
            }
            if(sub3Marks>100){
                cout<<"The mark you entered for subject 3 is above 100."<<endl;
                getDataSub3();
            }
        }
    }
    void getData(){
        getDataName();
        getDataSub1();
        marksCheckSub1();
        getDataSub2();
        marksCheckSub2();
        getDataSub3();
        marksCheckSub3();
    }
    void average(){
        averageMarks = (sub1Marks+sub2Marks+sub3Marks)/3;
    }
    void total(){
        totalMarks = sub1Marks + sub2Marks + sub3Marks;
    }
    void displayResult(){
        cout<<"Your name is "<<name<<"."<<endl;
        cout<<"Your average marks is: "<<averageMarks<<endl;
        cout<<"Your total marks is: "<< totalMarks<<endl;  
    }
    void grade(){
        if(totalMarks<60){
            cout<<"Your grade is F."<<endl;
        }
        else if(totalMarks>=60 && totalMarks<70){
            cout<<"Your grade is D."<<endl;
        }
        else if(totalMarks>=70  && totalMarks<80){
            cout<<"Your grade is C."<<endl;
        }
        else if(totalMarks>=80 && totalMarks<90){
            cout<<"Your grade is B."<<endl;
        }
        else{
            cout<<"Your grade is A."<<endl;
        }
    }
};
int main()
{
    Student s1;
    s1.getData();
    s1.total(); 
    s1.average();
    s1.displayResult();
    s1.grade();
return 0;
}