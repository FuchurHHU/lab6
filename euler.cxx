#include <cmath>
#include <iostream>

using namespace std;

int main (){
  const double lambda = -0.5;
  const double dt = 0.1 ;
  const double tH = log(0.5)/lambda;
  const double tmax = 5*tH;
  const int N = tmax/dt + 1 ;
  double t = 0;
  
  double yf = 1 ; //initial y for forward Euler
  double yb = yf; //initial y for backward Euler
  double yt = yf; //initial y for trapezoidal
  double ya = yf;
  cout << t <<"\t" << yf <<"\t"<< yb <<"\t"<< yt <<"\t"<< ya << endl;
  
  
  
  
   for (int i = 0; i<N; i++){
    
     t +=dt;
      
     yf *= (1 + lambda*dt); //Euler forward:
     
     yb /= (1 - lambda*dt) ; //Euler backward
     
     yt *= (1 + 0.5*dt*lambda)/(1 - 0.5*dt*lambda) ; // Trapezoidal
     
     ya = exp(lambda*t);
    
     
     
      cout << t <<"\t" << yf <<"\t"<< yb <<"\t"<< yt <<"\t"<< ya << endl;
     
  }
  
  
 
  
  
  return 0;
  
}