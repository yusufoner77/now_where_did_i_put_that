#include <iostream>
#include <vector>
using namespace std;


// This function will find a char in a string and return the first index of where it was found
// if the char is not found in the string, it will output -1

void find_it(string input, char search_query) {
	
	vector<char> letters;
	
	for (int i = 0; i < input.size(); i++) {
	
		letters.push_back(input[i]);
	
	}
	
	for (int i = 0; i < letters.size(); i++) {
	
		if (letters[i] == search_query) {
		
			cout << i << endl;
			return;
		
		}
		
	}

	cout << "-1" << endl;

}

// This function will find a substring in a string, and return the index of where it was found
// if the substring is not found, it will output -1

void find_it(string input, string search_query) {
	
	if (input.find(search_query) != string::npos) {
	
		cout << input.find(search_query) << endl;
		
	} else {
	
		cout << -1 << endl;
	
	}

}


int main() {
	string input = "hello my name is Yusuf";
	
	// expected value 1
	find_it(input, 'e');
	
	//expected value 5
	find_it(input, ' ');
	
	//expected value -1
	find_it(input, 'z');
	
	//expected value 6
	find_it(input, "my");
	
	//expected value -1
	find_it(input, "was");
	
	//expected value 9
	find_it(input, "na");
	
	//expected value 17
	find_it(input, "Yusuf");

}