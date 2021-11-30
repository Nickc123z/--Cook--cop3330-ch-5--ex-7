/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nick Cook
 */

#include<iostream>
#include<cmath>
using namespace std;



int main()
{
    cout<<"The quadratic equation is ax^2+bx+c \n";
    int a,b,c;
    cout<<"Enter the values for a,b and c:";
    cin>>a>>b>>c;
    roots(a,b,c);
    return 0;
}


void roots(int a, int b, int c){
    float r1,r2,r,i;
    int disc = (b*b)-(4*a*c);

    if(disc == 0){
        r1 =(float)(-b + sqrt(disc))/(2*a);
        }
    else if(disc>0){
        r1 =(float)(-b+sqrt(disc))/(2*a);
        r2 =(float)(-b-sqrt(disc))/(2*a);
        }
    else{
        r =(float) (-b/(2*a));
        i =(float)(sqrt(-disc)/(2*a));
        cout << "r2 = " << r << "-" << i << "i" << endl;
    }
}

