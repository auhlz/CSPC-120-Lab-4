// Alex Labitigan
// CPSC 120-12
// 2022-09-29
// alexlabitigan@csu.fullerton.edu
// @auhlz
//
// Lab 04-02
// Partners: @farrah-e
//
// Program to convert decimalized feet to feet, inches, and fractional inches,
// up to one eigth.

#include <cmath>
#include <iostream>
using namespace std;

const float kInchesInFeet{12.0};
const float kEighthsInInch{8.0};

int main(int argc, char const *argv[]) {
  float input_decimal_feet{NAN};
  cout << "Enter the number of feet you wish to convert to feet-inch: ";
  cin >> input_decimal_feet;
  string sign;
  if (input_decimal_feet < 0.0) {
    input_decimal_feet *= -1.0;
    sign = "-";
  }

  int _feet_integer_component{0};
  float feet_fractional_component{NAN};

  _feet_integer_component = static_cast<int>(trunc(input_decimal_feet));
  feet_fractional_component =
      input_decimal_feet - float(_feet_integer_component);
  float decimal_inches{NAN};
  decimal_inches = feet_fractional_component * kInchesInFeet;

  int _inches_integer_component{0};
  float inches_fractional_component{NAN};
  _inches_integer_component = static_cast<int>(decimal_inches);
  inches_fractional_component =
      decimal_inches - float(_inches_integer_component);

  float eighths{NAN};
  eighths = inches_fractional_component * kEighthsInInch;
  int _eighths_integer_component{0};
  _eighths_integer_component = static_cast<int>(eighths);

  cout << sign << input_decimal_feet << " feet is ";
  cout << sign << _feet_integer_component << " feet, ";
  cout << _inches_integer_component;
  if (_eighths_integer_component != 0) {
    cout << " and " << _eighths_integer_component << "/8";
  }
  cout << " inches\n";
  return 0;
}