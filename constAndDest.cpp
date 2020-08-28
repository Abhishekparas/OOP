#include<bits/stdc++.h>
using namespace std;

class User {
public:
	string firstName;
	string lastName;

	string getStatus() {
		return status;
	}
	User() {
		cout << "constructor called" << endl;
	}

	User(string firstName, string lastName) {
		this->firstName = firstName;
		this->lastName = lastName;
	}
	~User(){
		cout<<"Destructor called"<<endl;
	}

private:
	string status = "Online";

};

int addUserIfNotExist(vector<User> &v, User user) {
	for (int i = 0; i < v.size(); ++i)
	{
		if (v[i].firstName == user.firstName and v[i].lastName == user.lastName) {
			return i;
		}
	}
	v.push_back(user);
	return v.size() - 1;
}

int main(int argc, char const *argv[])
{
	User user("abhishek", "parashar");

	cout << user.firstName << " " << user.lastName << endl;

	return 0;
}