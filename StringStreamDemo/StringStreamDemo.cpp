// StringStreamDemo.cpp 
//

#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
	float balance = 1234.0f; // the lowercase f means make this a floating point number
	string report = GetBankBallanceSummary(balance);
	cout << report;
	
	return 0;
}


