#include <iostream>
#include <cmath>// needed for pow
#include <iomanip> // needed for setprecision
using namespace std;
int main() 
{
  double  amount, principal, compound, interest_rate, interest_earned; // declare variables
  
  cout <<"What is the principal of the account? " << endl; // get user info
  cin >> principal;
  cout <<"What is the interest rate of the account? " << endl;
  cin >> interest_rate;
  cout <<"How many times will the interest be compounded? " << endl;
  cin >> compound;
  
  amount =  principal * pow((1 + (interest_rate / 100) / compound), compound);// doing math for interest and amount
  interest_earned= amount - principal;
  
  cout << fixed << setprecision(2);// fix the number to two decimal places
    cout << "Interest Rate: " << interest_rate << "%" << endl; // display results to user
    cout << "Times Compounded: " << compound << endl;
    cout << "Principal: $" << principal << endl;
    cout << "Interest Earned: $" << interest_earned << endl;
    cout << "Total Amount: $" << amount << endl;
} 