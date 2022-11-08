#include<iostream>

using namespace std;

main()
{ 
   float matric,inter, ecat;
   cout<< "enter matric marks: ";
    cin >> matric;
    cout<<"enter inter marks: ";
    cin>> inter;
    cout<< "enter ecat marks: ";
    cin>> ecat;

     float matric_percent, inter_percent, ecat_percent, total ;
     matric_percent = matric/1100.0*100*0.25;
      inter_percent = inter/1100*100*0.45;
      ecat_percent = ecat/400*100*0.30;
      total = matric_percent+inter_percent+ecat_percent;
      cout<<"your aggregate is:  "<<total;
}