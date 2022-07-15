#include <iostream>
#include <unistd.h>

using namespace std;

// Driver code
int main(int argc, char**argv)
{
	int main(int, char** );
	int pid;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int Odd = 0, Even = 0, n, i;
	n = fork();
	
	//Checking if n is not 0
	if (n > 0) {
		for (i = 0; i < 10; i++) {
			if (a[i] % 2 == 0)
				Even = Even + a[i];
		}
		cout << "\t%d\n Parent Process";
		cout << "EXIT_FAILURE";
		cout << "\n even no. is " << Even << endl;
	}
	// If n is 0 i.e. we are in child process
	else {
		for (i = 0; i < 10; i++) {
			if (a[i] % 2 != 0)
				Odd = Odd + a[i];
		}
		cout << "%d\n Child Process";
		cout << "EXIT_SUCCESS";
		cout << "\n odd no. is " << Odd << endl;
	}
	return 0;
}


