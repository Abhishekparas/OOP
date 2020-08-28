#include<bits/stdc++.h>
using namespace std;

struct User {
	string firstName;
	string lastName;

	string getStatus() {
		return status;
	}

private:
	string status = "Online";
};

int main(int argc, char const *argv[])
{
	User user;
	user.firstName = "abhishek";
	user.lastName = "parashar";

	cout << "First name: " << user.firstName << endl;
	cout << "Last name: " << user.lastName << endl;
	cout << "Status : " << user.getStatus() << endl;

	return 0;
}