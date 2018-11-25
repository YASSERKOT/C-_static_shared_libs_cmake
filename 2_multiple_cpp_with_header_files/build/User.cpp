#include <User.h>
#include <string>

User::User(double cin, std::string name){
	m_cin = cin;
	m_name = name;
}
User::~User(){}
double User::getCin(){
	return m_cin;
}
string User::getName(){
	return m_name;
}

ostream& operator<<(ostream &out, User const& user){
	out<< std::to_string(user.getCin()) << " || " << user.getName() << endl;
}
