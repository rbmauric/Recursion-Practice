//Ryan Mauricio
//Recursion Practice
//10/28/19

#include <iostream>
#include <string>
#include "SLL.h"

using namespace std;

//Reverse a string recursively
string reverse(string str, int n, int m) {
	string reversed = str;
	
	if (m == 0 || m <= n) 
		return reversed;
	else {
		reversed[n] = str[m];
		reversed[m] = str[n];
		n++;
		m--;
		return reverse(reversed, n, m);
	}
}

//See if a string is a palindrome recursively.
string palindrome(string pal, int i, int j) {	
	string newpal = pal;

	if (newpal[i] != newpal[j]) {
		cout << "Number is not a palindrome. \n";
		return " ";
	}

	else {
		if (i > j) {
			cout << "Number " << newpal << " is a palindrome. \n";
			return newpal;
		}

		else {
			char k = newpal[i];
			newpal[i] = newpal[j];
			newpal[j] = k;
			i++;
			j--;
			return palindrome(newpal, i, j);
		}
	}
}

int main() {
	string test = "Buttery";
	string reversed = " ";
	int testint = 110011;

	cout << "Initial string: " << test << endl;
	cout << "Reversed string: " << reverse(test, 0, test.size() - 1) << endl;
	cout << endl;

	test = to_string(testint);
	cout << "Testing palindrome for int: " << testint << endl;
	palindrome(test, 0, test.size() - 1);
	cout << endl;

	SLL list;
	
	cout << "Inserting list elements... \n";
	list.addFront(1);
	list.addFront(2);
	list.addFront(3);
	list.addFront(5);

	list.insertAtRecurse(list.head, nullptr, 2, 4);
	cout << "Printing list: ";
	list.print();

	return 0;
}