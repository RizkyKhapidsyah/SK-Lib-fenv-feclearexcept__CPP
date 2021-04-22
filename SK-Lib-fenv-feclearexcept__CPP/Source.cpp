/* feclearexcept, fetestexcept example */

#include <iostream>      /* printf */
#include <math.h>       /* sqrt */
#include <fenv.h>       /* feclearexcept, fetestexcept, FE_ALL_EXCEPT, FE_INVALID */
#include <conio.h>

/* Source by CppBuzz 
* Modified by Rizky Khapidsyah
*/

#pragma STDC FENV_ACCESS on

using namespace std;

int main() {
	feclearexcept(FE_ALL_EXCEPT);
	sqrt(-1);

	cout << "Program yang diproses : sqrt(-1) \n\nHasil : ";

	if (fetestexcept(FE_INVALID)) {
		cout << "sqrt(-1) raises FE_INVALID\n";
	}

	_getch();
	return 0;
}