#include <iostream>
using namespace std;

int main() 
{

  const int original_cookies = 48; // declaring constant variables
  const double sugar = 1.5;  
  const double butter = 1.0;  
  const double flour = 2.75;

  double amount, scale, new_sugar,new_butter,new_flour; 
  cout << "How many cookies do you want to make? ";
  cin >> amount; 
  scale = amount/original_cookies; // Determines the scale factor based on the amount of cookies
  new_sugar = scale * sugar;
  new_butter = scale * butter;
  new_flour = scale * flour;
  cout << "The ingredients you need for " << amount<< " cookies is: " << endl;
  cout << "Sugar: " <<new_sugar<< " cups"<< endl; 
  cout << "Flour: " <<new_flour<< " cups"<< endl; 
  cout << "Butter: " <<new_butter<< " cups"<< endl;
  
  
    }