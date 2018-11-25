#include <string>

class Client{

private:
	long int m_id;
	std::string m_name;
	std::string m_password;
	/** Bloc des fonctions protégès **/
	void afficher(std::ostream &flux) const; // Le mettre ici nous assure que cette fnct ne sera utilisé que par nous !!

public:
	Client(long int, std::string, std::string);
	Client(long int, std::string); // Here we will generate automatically the password.
	virtual ~CLient();

	int getId() const;
	void setId(int);
	std::string getName() const;
	void setName(std::string);
	std::string getPassword() const;
	void setPassword(std::string);
	
	std::string generatePassword(int, std::string) const;
	friend std::ostream& operator<<(std::ostream &flux, Client const& clt);
};
