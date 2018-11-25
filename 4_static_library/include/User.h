#include <string>
#include <iostream>
using namespace std;

class User{
	private:
		int m_cin;
		string m_name;
	public:
		User(int, string);
		~User();
		int getCin();
		string getName();
		friend ostream &operator<<(ostream &out, User &user);
};

