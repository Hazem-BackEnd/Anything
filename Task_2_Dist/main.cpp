#include <iostream>
using namespace std;
// Q2 by MAEF
double f(double x) {
    return 1+x*x;
}
double Trapezoidal_Rule(double a , double b , double n) {
    double h=(b-a)/n;
    double res=((f(a)+f(b))/2);
    double x=a;
    for (int i = 1; i <= n-1; ++i) {
        x=a+i*h;
        res+=f(x);
    }
    return h*res;
}

int main() {
   double a , b , n;
    cin>>a>>b>>n;
  cout<<Trapezoidal_Rule(a,b,n);
    return 0;
}
