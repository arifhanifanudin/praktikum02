#include <iostream>

using namespace std;

int main()
{
    int  A,B,C;
    cout << "Masukan bilangan 1:";
	cin >> A;

	cout << "Masukan bilangan 2:";
	cin >> B;

	cout << "Masukan bilangan 3:";
	cin >> C;

	if (A > B) {
		if (A > C)
			cout << "Bilangan terbesar adalah:" << A;
		else
			cout << "Bilangan terbesar adalah:" << C;
	    } else {
		if (B > C)
			cout << "Bilangan terbesar adalah:" << B;
		else
			cout << "Bilangan terbesar adalah:" << C;
        }
}

