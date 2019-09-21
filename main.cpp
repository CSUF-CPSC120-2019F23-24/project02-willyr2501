// Name:Willy Reyes-Rendon >>
// This program calculates and displays business expenses.
#include <iostream>
#include <string> //string is for location
#include <iomanip>
int main()
{
  int days, Location, Days;
  double hotel_expense, meal_expense, total;
  std::string location; //New York City

std::cout << "Welcome to the Business Trip Tracker!" <<std::endl;

std::cout << "What is the business trip location? " <<std::endl;
getline(std::cin, location);

std::cout << "How many days will the trip take? " <<std::endl;
std::cin >> days;

std::cout << "What is the total hotel expense? " <<std::endl;
std::cin >> hotel_expense;

std::cout << "What is the total meal cost? " <<std::endl;
std::cin >> meal_expense;

total = meal_expense + hotel_expense;

std::cout << std::setw(15) << "Location";

std::cout << std::setw(10) << "Days";

std::cout << std::setw(10) << "Hotel";

std::cout << std::setw(10) << "Meal";

std::cout <<std::setw(10) << "Total" <<std::endl;

std::cout << std::setw(15) << location.substr(0,13);

std::cout << std::setw(10) << days;

std::cout << std::setw(10) << hotel_expense;

std::cout << std::setw(10) << meal_expense;

std::cout << std::setw(10) << total <<std::endl;

  return 0;
}
