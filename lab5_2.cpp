#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double A)
{
    double x;
    x = (A*M_PI)/180;
    return x;
}

double rad2deg(double B)
{
    double y;
    y = (B*180)/M_PI;
    return y;
}

double findXComponent(double C,double D,double E,double F)
{
    double cx;
    cx = C*cos(E) + D*cos(F);
    return cx;
}

double findYComponent(double C,double D,double E,double F)
{
    double cy;
    cy = C*sin(E) + D*sin(F);
    return cy;
}

double pythagoras(double Xcomp, double Ycomp)
{
    double R;
    R = sqrt(pow(Xcomp,2)+pow(Ycomp,2));
    return R;
}

void showResult(double RL,double RD)
{
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << RL<<"\n";
    cout << "Direction of the resultant vector (deg) = " << RD<<"\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
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
