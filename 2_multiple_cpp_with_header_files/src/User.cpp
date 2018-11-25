#include <User.h>
#include <string>
using namespace std;

User::User(int cin, string name){
	m_cin = cin;
	m_name = name;
}
User::~User(){}
int User::getCin(){
	return m_cin;
}
string User::getName(){
	return m_name;
}

ostream& operator<<(ostream &out, User &user){
	out<< std::to_string(user.getCin()) << " || " << user.getName() << endl;
}
