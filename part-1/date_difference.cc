// Alex Labitigan
// CPSC 120-12
// 2022-09-29
// alexlabitigan@csu.fullerton.edu
// @auhlz
//
// Lab 04-01
// Partners: @farrah-e
//
// Program to calculate the number of days between two Gregorian dates.
//

#include <iostream>
int main(int argc, char const *argv[]) {
  std::cout << "Let's find the number of days between two dates...\n";
  // TODO: Using cout, prompt the user for a starting month
  std::cout << "Enter a start month: ";



  // TODO: declare a variable named start_month of type int, assign the value 0
  // to the variable.
  int start_month{0};
  std::cin >> start_month;
  std::cout << "Enter a start day: ";
  int start_day{0};
  std::cin >> start_day;
  std::cout << "Enter a start year: ";
  int start_year{0};
  std::cin >> start_year;
  std::cout << "\n";

  std::cout << "Enter a end month: ";
  int end_month{0};
  std::cin >> end_month;
  std::cout << "Enter a end day: ";
  int end_day{0};
  std::cin >> end_day;
  std::cout << "Enter a end year: ";
  int end_year{0};
  std::cin >> end_year;
  std::cout << "\n";

  int start_number_of_days_since_epoch{0};
  int start_julian_day = start_day - 32075 + 1461
      * (start_year + 4800 + (start_month - 14) / 12) / 4
      + 367 * (start_month - 2 - (start_month - 14) / 12 * 12) / 12 - 3
      * ((start_year + 4900 + (start_month - 14) / 12) / 100) / 4;
  start_number_of_days_since_epoch = start_julian_day;

int end_number_of_days_since_epoch{0};
  int end_julian_day = end_day - 32075 + 1461
      * (end_year + 4800 + (end_month - 14) / 12) / 4
      + 367 * (end_month - 2 - (end_month - 14) / 12 * 12) / 12 - 3
      * ((end_year + 4900 + (end_month - 14) / 12) / 100) / 4;
  end_number_of_days_since_epoch = end_julian_day;

  int number_days{0};
  number_days = end_number_of_days_since_epoch - start_number_of_days_since_epoch;
  std::cout << "The number of days between " << start_month << "/" << start_day <<
  "/" << start_year << " and " << end_month << "/" << end_day <<
  "/" << end_year <<" is " << number_days << " days" << "\n";



  //std::cout << "Debug: " << end_number_of_days_s/ starting number of days:

  // TODO: Calculate the Julian day of the starting date using the formula given
  // in the README.md and assign the result to the variable
  // start_number_of_days_since_epoch. Remember you will need to use the
  // variables start_day, start_month, and start_year. The formula is very
  // complicated and has many parantheses. Be very careful and double check your
  // work.

  // Optional TODO: To help you figure out what you are doing, print out the
  // value of start_number_of_days_since_epoch. For example: cout << "Debug:
  // starting number of days: " << start_number_of_days_since_epoch << "\n";
  // This way you can check your work. When you believe everything is working,
  // comment out this line or remove it. This is how programmers check their
  // work as they write a program.

  // TODO: Calculate the Julian day of the ending date using the formula given
  // in the README.md and assign the result to the variable
  // end_number_of_days_since_epoch. Remember you will need to use the variables
  // end_day, end_month, and end_year. The formula is very complicated and has
  // many parantheses. Be very careful and double check your work.

  // Optional TODO: To help you figure out what you are doing, print out the
  // value of end_number_of_days_since_epoch. For example:
  //   cout << "Debug: ending number of days: " <<
  //   end_number_of_days_since_epoch << "\n";

  // This way you can check your work. When you believe everything is working,
  // comment out this line or remove it. This is how programmers check their
  // work as they write a program.

  // TODO: Declare a variable named number_days of type int, assign the value 0
  // to the variable.
  // TODO: Calculate the number of days between end_number_of_days_since_epoch
  // and start_number_of_days_since_epoch by using subtraction. Assign the
  // result to number_days.

  // TODO: summarize the input by telling the computer user the two dates in
  // question and then how many days are between the two dates. See the
  // README.md for examples.

  return 0;
}
