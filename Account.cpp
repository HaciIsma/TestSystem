#include "AccountManager.h"
#include <iostream>

#define checkUsernameAndPassword user.array[i].username == username && user.array[i].password == password

using std::string;

void Account::signUp(User& user, string name, string surname, string telephone, string username, string password)
{
	User* temp = new User[++user.size];
	std::size_t len = user.size;
	for (size_t i = 0; i < len - 1; i++)
	{
		temp[i] = user.array[i];
	}

	temp[len - 1].name = name;
	temp[len - 1].surname = surname;
	temp[len - 1].telephone = telephone;
	temp[len - 1].username = username;
	temp[len - 1].password = password;

	if (user.array)
	{
		delete[]user.array;
	}

	user.array = temp;
}

void Account::signIn(User& user, string username, string password)
{
	for (size_t i = 0; i < user.size; i++)
	{
		if (checkUsernameAndPassword)
		{
			std::cout << "System open" << '\n';
			std::cout << "Qoy partdasin" << '\n';
			return;
		}
	}
	std::cout << "Username or password wrong" << '\n';
}