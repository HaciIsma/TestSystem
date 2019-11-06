#pragma once
#include <string>

using std::string;

class Test
{
public:
	Test(){}
   ~Test(){}

   void creat(string category,string name,std::size_t questions_size,string &questions,string &variants,string &answer);
   void addquestions(string questions, string answer, std::size_t variantSize);

private:
	string category;
	string name;

	string questions = nullptr;
	string variants = nullptr;
	std::size_t variantSize = 0;
	string answer = nullptr;
};