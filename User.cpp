#include "User.h"

User::User():array(nullptr){}

User::~User()
{
	delete[]array;
}

//file