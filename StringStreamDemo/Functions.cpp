// function definition
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Functions.h"

using namespace std;

string GetBankBallanceSummary(float balance)
{
	stringstream bankSummaryStream;
	bankSummaryStream.precision(2);
	bankSummaryStream << "Bank balance is $" << balance << endl;
	return bankSummaryStream.str();

}