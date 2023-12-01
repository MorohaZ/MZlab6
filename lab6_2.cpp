#include <bits\stdc++.h>
#include<cmath>

using namespace std;

double deg2rad(double deg){
return deg*3.14/180;
}

double rad2deg(double rad){
return rad*180/3.14;
}

double findXComponent(double L1,double L2, double A1,double A2){
return (L1*cos(A1))+(L2*cos(A2));
}

double findYComponent(double L1,double L2, double A1,double A2){
    return (L1*sin(A1))+(L2*sin(A2));
}

double  pythagoras(double xcop,double ycop){
double length_tan = sqrt(pow(xcop,2)+pow(ycop,2));
return length_tan;
}

double showResult(double length_vec,double direction_vec){
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
cout << "Length of the resultant vector = "<<length_vec<<"\n";
cout<<"Direction of the resultant vector (deg) = "<<direction_vec<<"\n"; 
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
