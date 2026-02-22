#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
  cout<<fixed<<setprecision(2);
  char plan;
  double gigs;
  double plan_Price;
  string name;
  double savings;

  cout<<"What is your name?\n";
  getline(cin, name);

  cout<<"What plan would you like to purchase? Plan A, B, or C?\n";
  cin>>plan;
  cout<<"How many gigabytes will you use per month?\n";
  cin>>gigs;
  if (gigs<=0) {
    cout<<"Must be a positive number of gigabytes\n";
    return 1;
  }

  switch (plan) {
    case 'A': 
    case 'a':
      plan_Price = max(0.0, gigs - 2.0) * 8 + 39.99;
      break;
    case 'B':
    case 'b':
      plan_Price = max(0.0, gigs - 8.0) * 8 + 59.99;
      break;
    case 'C':
    case 'c':
      plan_Price = 79.99;
      break;
    default:
    cout<<"Invalid plan!"<<endl;
    return 1; 
  }
  cout<<name<< ", your plan will cost "<< plan_Price<< " dollars per month.\n";

  if (plan == 'A' || plan == 'a') {
    savings = ((gigs - 8)*8+59.99) - plan_Price;
    if (savings > 0) {
      cout<<"Plan B saves "<< savings << " dollars."<< endl;
    }
  }
  else if (plan == 'B' || plan == 'b') {
    savings = 79.99 - plan_Price;
    if (savings >0) {
      cout<< "Plan C saves "<< savings << " dollars."<< endl;
    }
  }
 
  return 0;
  }

  



