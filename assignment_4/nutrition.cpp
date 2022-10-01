#include <iostream>
#include <math.h>

using namespace std;


// NOTE: Program does NOT validate input!
int main() {
  const double PERCENT = 0.001;      
  double sweetener, mouse, dieter, num_soda;    
  char cont;                          

  do{
  cout << "How many grams of artificial sweetner to kill a mouse: ";
  cin >> sweetener;
  cout << "What is the weight of the mouse in grams: ";
  cin >> mouse;
  cout << "What is the diet goal (lbs): ";
  cin >> dieter;

  num_soda = (dieter * (sweetener / mouse)) / (sweetener * PERCENT);
  cout << "You can drink " << ( ceil(num_soda) - 1 ) << " of diet soda pop without dying." << endl;;

  cout << "Continue (y/n)? ";
  cin >> cont;

  } while (tolower(cont) == 'y');

  cout << "soda is bad for you!" << endl;
	return 0;
}
