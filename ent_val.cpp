//Programing for finding the entertainment value of a media
#include <math.h>
#include "ent_val.h"


int main(){

  int pos_f, neg_f, d=1, e=1, f=1, g=1;
  double sum_p;
  cout << "Enter number of positive factors: ";
  cin >> pos_f;
  cout << "Enter number of negative factors: ";
  cin >> neg_f;
  sum_p = pos_sum(pos_f, d);
  cout << "The positive sum is " << sum_p << endl;

    return 0;
}
