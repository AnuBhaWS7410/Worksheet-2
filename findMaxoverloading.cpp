//Program to overload a function "findMax"
#include<iostream>
using namespace std;
int findMax(int a, int b){
    if(a>b){
        cout<<"Maximum between "<<a<<" and "<<b<<" is "<<a<<"."<<endl;
        return a;
    }
    else{
        cout<<"Maximum between "<<a<<" and "<<b<<" is "<<b<<"."<<endl;
        return b;
    }
}
float findMax(float c, float d){
    if(c>d){
        cout<<"Maximum between "<<c<<" and "<<d<<" is "<<c<<"."<<endl;
        return c;
    }
    else{
        cout<<"Maximum between "<<c<<" and "<<d<<" is "<<d<<"."<<endl;
        return d;
    }
}
int findMax(int x, int y, int z){
    if(x>y){
        if(x>z){
            cout<<"Maximum between "<<x<<", "<<y<<" and "<<z<<" is "<<x<<"."<<endl;
            return x;
        }
        else{
            cout<<"Maximum between "<<x<<", "<<y<<" and "<<z<<" is "<<z<<"."<<endl;
            return z;
        }
    }
    else{
        if(y>z){
            cout<<"Maximum between "<<x<<", "<<y<<" and "<<z<<" is "<<y<<"."<<endl;
            return y;
        }
        else{
            cout<<"Maximum between "<<x<<", "<<y<<" and "<<z<<" is "<<z<<"."<<endl;
            return z;
        }
    }
}
float findMax(int p, float q){
    if(p>q){
        cout<<"Maximum between "<<p<<" and "<<q<<" is "<<p<<"."<<endl;
        return p;
    }
    else{
        cout<<"Maximum between "<<p<<" and "<<q<<" is "<<q<<"."<<endl;
        return q;
    }
}
void getData(){
    int choice;
    int a,b,c;
    float x,y;
    cout<<"What do you want to compare between? "<<endl;
    cout<<"1. Two integers \n2. Two Floats \n3. Three Integers \n4. An integer and a float"<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;
    if(choice == 1){
        cout<<"Enter the first integer: "<<endl;
        cin>>a;
        cout<<"Enter the second integer: "<<endl;
        cin>>b;
        findMax(a,b);
    }
    else if(choice == 2){
        cout<<"Enter the first float: "<<endl;
        cin>>x;
        cout<<"Enter the second float: "<<endl;
        cin>>y;
        findMax(x,y);
    }
    else if(choice == 3){
        cout<<"Enter the first integer: "<<endl;
        cin>>a;
        cout<<"Enter the second integer: "<<endl;
        cin>>b;
        cout<<"Enter the third integer: "<<endl;
        cin>>c;
        findMax(a,b,c);
    }
    else if(choice == 4){
        cout<<"Enter the first integer: "<<endl;
        cin>>a;
        cout<<"Enter the second float: "<<endl;
        cin>>x;
        findMax(a,x);
    }
}
int main()
{
    getData();
return 0;
}