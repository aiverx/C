#include <iostream>

class Accounts
{
public:
	void setName(std::string accountName) {
		name = accountName;
	}

	std::string getName() const {
		return name;
	}
private:
	std::string name;
};

