#include <client.h>
#include <string>

Client::Client(long int id, std::string name, std::string password):m_id(id), m_name(name), m_password(password) {}
Client::Client(long int id, std::string name):m_id(id), m_name(name) {
	m_password = generatePassword(id, name);
}
Client::~CLient(){}
int Client::getId() const {
	return m_id;
}
void Client::setId(int id){
	m_id = id;
}

std::string Client::getName() const{
	return m_name;
}
void Client::setName(std::string name){
	m_name = name;
}

std::string Client::getPassword() const{
	return m_password;
}
void Client::setPassword(std::string password){
	m_password = password;
}

std::string Client::generatePassword(int id, std::string name) const{
	//char *intStr = itoa(id);
	//std::string str = string(intStr);
	//Solution of c++11
	std::string str = std::to_string(id);
	return(id+str);
}

void afficher(std::ostream &flux) const{
	flux << std::to_string(m_id) << " | " << m_name << " | " << m_password;
}

ostream& operator<<(ostream &flux, Client const& clt){
	clt.affiche(flux);	
	return flux;
}
