#include <iostream>
#include<cmath>
using namespace std;
double deg2rad(double deg){
    double rad;
    rad = deg*(M_PI/180);
    return rad;
}
double findXComponent(double I1, double I2, double D1, double D2){
    double Rx;
    Rx = (I1*cos(D1))+(I2*cos(D2));
    return Rx;
}
double findYComponent(double IY1, double IY2, double DY1, double DY2){
    double RY;
    RY = (IY1*sin(DY1))+(IY2*sin(DY2));
    return RY;
}
double pythagoras(double X, double Y){
    double RP;
    RP = sqrt(pow(X,2)+pow(Y,2));
    return RP;
}
double rad2deg(double rad){
    double deg;
    deg = rad*(180/M_PI);
    return deg;
}
void  showResult(double L, double D){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
    cout << "\nLength of the resultant vector = "<<L;
    cout << "\nDirection of the resultant vector (deg) = "<<D;
    cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
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