#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  double shirts;
  double total;
  double discountTotal;
  double price;
  double discount10;
  double discount20;
  double discount15;
  double discount25;

  cout << setprecision (2) << fixed;

  cout << "How many shirts would you like ?" << endl;
  cin >> shirts;

  price = 12.00;
  total = shirts * price;
  discount10 = total - total * .10;
  discount15 = total - total * .15;
  discount20 = total - total * .20;
  discount25 = total - total * .25;
  
  if (shirts <= 0){
   cout << "Invalid Input: Please enter a nonnegative integer" << endl;
  }
  else if (shirts <= 4){   
  cout << "The cost per shirt is $12 and the total cost is $" << total << endl;
  }
  else if (shirts <= 10) {
  cout << "The cost per shirt is $"  << discount10 / shirts;
  cout << " and the total cost is $" << discount10 << endl;
  }
  else if (shirts <=20){
  cout << "The cost per shirt is $" << discount15 / shirts;
  cout << " and the total cost is $" << discount15 << endl;
  }
  else if (shirts <= 30){
  cout << "The cost per shirt is $ " << discount20 / shirts;
  cout << " and the total cost is $" << discount20<< endl;
  }
  else{ 
  cout << "The cost per shirt is $ " << discount25 /  shirts; 
  cout << " and the total cost is $"  << discount25 << endl;
  }
  }