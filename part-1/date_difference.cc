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
  std::cout << "Enter a start month: ";
  int start_month{0};
  std::cin >> start_month;
  std::cout << "Enter a start day: ";
  int start_day{0};
  std::cin >> start_day;
  std::cout << "Enter a start year: ";
  int start_year{0};
  std::cin >> start_year;
  std::cout << "\n";

  std::cout << "Enter an end month: ";
  int end_month{0};
  std::cin >> end_month;
  std::cout << "Enter an end day: ";
  int end_day{0};
  std::cin >> end_day;
  std::cout << "Enter an end year: ";
  int end_year{0};
  std::cin >> end_year;
  std::cout << "\n";

  int start_number_of_days_since_epoch{0};
  int start_julian_day =
      start_day - 32075 +
      1461 * (start_year + 4800 + (start_month - 14) / 12) / 4 +
      367 * (start_month - 2 - (start_month - 14) / 12 * 12) / 12 -
      3 * ((start_year + 4900 + (start_month - 14) / 12) / 100) / 4;
  start_number_of_days_since_epoch = start_julian_day;

  int end_number_of_days_since_epoch{0};
  int end_julian_day =
      end_day - 32075 + 1461 * (end_year + 4800 + (end_month - 14) / 12) / 4 +
      367 * (end_month - 2 - (end_month - 14) / 12 * 12) / 12 -
      3 * ((end_year + 4900 + (end_month - 14) / 12) / 100) / 4;
  end_number_of_days_since_epoch = end_julian_day;

  int number_days{0};
  number_days =
      end_number_of_days_since_epoch - start_number_of_days_since_epoch;
  std::cout << "The number of days between " << start_month << "/" << start_day
            << "/" << start_year << " and " << end_month << "/" << end_day
            << "/" << end_year << " is " << number_days << " days"
            << "\n";
  return 0;
}
