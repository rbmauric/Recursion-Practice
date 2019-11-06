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
	
	if (m == 0 || m <= n) {
		cout << "The reversed string is " << reversed << ". \n";
		return reversed;
	}

	else {
		reversed[n] = str[m];
		reversed[m] = str[n];
		n++;
		m--;
		return reverse(reversed, n, m);
	}
}

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
	int testint = 100;

	reversed = reverse(test, 0, test.size()-1);

	test = to_string(testint);
	
	palindrome(test, 0, test.size() - 1);

	SLL list;
	
	list.addFront(1);
	list.addFront(2);
	list.addFront(3);
	list.addFront(5);

	list.insertAtRecurse(list.head, nullptr, 0, 4, 4);


	return 0;
}