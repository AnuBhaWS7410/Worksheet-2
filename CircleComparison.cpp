#include<iostream>
using namespace std;
class Circle{
    private:
    float radius, area;
    public:
    Circle(){
        cout<<"Enter the radius: "<<endl;
        cin>>radius;
        areaCalculate();
    }
    float areaCalculate(){
        area = 3.14*radius*radius;
        displayResult();
        return area;
    }
    void displayResult(){
        cout<<"The area of a circle with radius "<<radius<<" is "<<area<<"."<<endl;
    }
    friend void compareTwoCircles(Circle o1, Circle o2);
};
void compareTwoCircles(Circle o1, Circle o2){
    if(o1.area>o2.area){
        cout<<"The area of Circle 1 is larger than the are of Circle 2."<<endl; 
    }
    else if(o2.area>o1.area){
        cout<<"The area of Circle 2 is larger than the are of Circle 1."<<endl;
    }
    else{
        cout<<"Both Circle 1 and Circle 2 have the same area."<<endl;
    }
}
int main()
{
    Circle c1;
    Circle c2;
    compareTwoCircles(c1,c2);
return 0;
}