#include <iostream>
#include <vector>
using namespace std;

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

void find_it(string input, string search_query) {
	
	if (input.find(search_query) != string::npos) {
	
		cout << input.find(search_query) << endl;
		
	} else {
	
		cout << -1 << endl;
	
	}

}


int main() {
	string input = "hello my name is Yusuf";
	
	find_it(input, 'e');
	find_it(input, ' ');
	find_it(input, 'z');
	find_it(input, "my");
	find_it(input, "was");
	find_it(input, "na");
	find_it(input, "Yusuf");

}