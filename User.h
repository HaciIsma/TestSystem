#pragma once

#include <string>

class User
{
public:
	User();
   ~User();
	friend class Account;
private:
	User* array;
	std::string name;
	std::string surname;
	std::string telephone;
	std::string username;
	std::string password;
	std::size_t size = 0;
};