#pragma once
#include "User.h"
#include <string>

using std::string;

class Account
{
public:
	void signUp(User& user, string name, string surname, string telephone, string username, string password);
	void signIn(User& user, string username, string password);
};
