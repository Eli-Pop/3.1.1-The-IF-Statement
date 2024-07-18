// Magic Number program.

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int magic; // magic number
	int guess; // user's guess

	magic = rand(); // get a random number

	cout << "Enter your guess";
	cin >> guess;

	if (guess == magic) cout << "** Right **" << "\n";
	// If the gues matches the "magic number", the message is displayed.
	

	system("pause");
	return 0;
}