#include<bits/stdc++.h>
using namespace std;

class User {
public:
	string firstName;
	string lastName;

	string getStatus() {
		return status;
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
	User user;
	user.firstName = "abhishek";
	user.lastName = "parashar";

	vector<User> v;
	//v.push_back(user);
	// cout<<v[0].firstName<<endl;
	// cout<<v[0].lastName<<endl;
	User user1, user2, user3;
	user1.firstName = "harry";
	user1.lastName = "potter";

	user2.firstName = "abhishek";
	user2.lastName = "parashar";

	user3.firstName = "walter";
	user3.lastName = "white";

	v.push_back(user1);
	v.push_back(user2);
	v.push_back(user3);

	cout << addUserIfNotExist(v, user) << endl;
	return 0;
}