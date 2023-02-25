#include <iostream>
#include <iomanip>

using namespace std;

//Function to obtain the blance without any monthly deposit. 
double BalanceWithoutMonthlyDeposit(double InitialInvestment, double interestRate, int NumberOfYears) {
  double Balance = InitialInvestment;
  for (int Year = 1; Year <= NumberOfYears; Year++) {
    double InterestEarnedThisYear = Balance * interestRate / 100;
    Balance += InterestEarnedThisYear;
    cout << "Year " << setw(2) << Year << ": " << "$" << setprecision(2) << fixed << Balance << "  Interest Earned: $" << setprecision(2) << fixed << InterestEarnedThisYear << endl;
  }
  return Balance;
}
//Function to otain the balance with monthyl deposit.
double BalanceWithMonthlyDeposit(double InitialInvestment, double InterestRate, int NumberOfYears, double MonthlyDeposit) {
  double Balance = InitialInvestment;
  for (int year = 1; year <= NumberOfYears; year++) {
    for (int month = 1; month <= 12; month++) {
      double InterestEarnedThisMonth = Balance * InterestRate / 100 / 12;
      Balance += InterestEarnedThisMonth + MonthlyDeposit;
    }
    cout << "Year " << setw(2) << year << ": " << "$" << setprecision(2) << fixed << Balance << "  Interest Earned: $" << setprecision(2) << fixed << Balance - InitialInvestment - (MonthlyDeposit * 12 * year) << endl;
  }
  return Balance;
}

//Main to obtain user, input 
int main() {
  double InitialInvestment, InterestRate, MonthlyDeposit;
  int NumberOfYears;
// asking usser for the intitial investment
  cout << "What is your initial investment: $";
  // assigning user-input to the variale (InitialInvestment)
  cin >> InitialInvestment;
  //asking user  for the  intersest rate  
  cout << "What is your interest rate (in percent ex 0.5): ";
  //assigning the interestRate  to the varibale. 
  cin >> InterestRate;
  //asking  for the year of the investment  on wht the user is planning. 
  cout << "Please Enter number of years, of your investment: ";
  //assigning the number to the variable .
  cin >> NumberOfYears;
  //asking the user for their deisre monthly payment. 
  cout << "Would you like to do a monthly deposit (if any, else enter 0): $";
  //assigning  the int to the variable.
  cin >> MonthlyDeposit;

  cout << "\nWithout any monthly deposit: " << endl;
  double finalBalanceWithoutMonthlyDeposit = BalanceWithoutMonthlyDeposit(InitialInvestment, InterestRate, NumberOfYears);

// the logic  if the user monthly payment is higher that zero 
  if (MonthlyDeposit > 0) {
    cout << "\nWith your monthly deposit of $" << MonthlyDeposit << ": " << endl;
    double finalBalanceWithMonthlyDeposit = BalanceWithMonthlyDeposit(InitialInvestment, InterestRate, NumberOfYears, MonthlyDeposit);
  }

  return 0;
}
