#include <iostream>

using namespace std;

string requestName();
double requestHeight(string fullName);
int requestNumberOfPartners();


int main() 
{
	string fullName1, fullName2;
	double height1, height2;

	fullName1 = requestName();
	height1 = requestHeight(fullName1);
	fullName2 = requestName();
	height2 = requestHeight(fullName2);

	cout << "If " << fullName1 << " and " << fullName2
			<< " stand on top of each other, their combined height will be "
			<< (height1 + height2);
	
}

string requestName()
{
	string name;
	cout << "Please enter full name: ";
	getline(cin, name);
	return name;
}

double requestHeight(string fullName)
{
	double height;
	cout << "Please enter " << fullName << "'s height: ";
	cin >> height;
	cin.ignore(2, '\n'); // gets rid of \n in the buffer
	
	return height;
}

int requestNumberOfPartners()
{
	int numberOfPartners; 
	cout << "How many partners are there?";
	cin >> numberOfPartners;
	
	return numberOfPartners;
}
