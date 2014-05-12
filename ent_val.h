//Functions for ent_val.cpp

#include<iostream>
using namespace std;

double pos_sum(int pos_f, int d){
  int n;
  double sum_p = 0;
  for(n = 1; n <= pos_f; n++){
    cout << "Enter a value(1-1000) for factor " << n << ": ";
    double pos_arr[d];
    cin >> pos_arr[d];
    sum_p = sum_p + pos_arr[d];
    d++;
  }
  return sum_p;
}
