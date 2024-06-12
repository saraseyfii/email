#include<iostream>
#include<cstring>
using namespace std;

struct Email {
	char address[100];
};
bool isValidEmail(const Email&email) {
	const char*address = email.address;
	char*atPost = strchr(address, '@');
	if (atPost == nullptr) {
		return false;
	}
	if (dotPost == address + strlen(address) - 1) {
		return false;
	}
	return true;
}
int main() {
	Email email;
	cout << "please enter your Email:" << endl;
	cin >> email.address;
	if (isValidEmail(email)) {
		cout << "the Email entered is valid" << endl;
	}
	else {
		cout << "the Email entered is not valid" << endl;
	}
	return 0;
}