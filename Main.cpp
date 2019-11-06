#include <iostream>
#include "User.h"
#include "AccountManager.h"

int main()
{
	User a;
	Account b;
	b.signUp(a, "Mehemmed", "Memmedov", "+994504473908", "Maqa", "2003");
	b.signIn(a, "Maqa", "2003");

	system("pause");
}