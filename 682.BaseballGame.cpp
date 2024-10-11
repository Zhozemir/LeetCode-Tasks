#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <numeric>


int calPoints(std::vector<std::string>& operations) {


	// simple solution with vector

	std::vector<int> record;

	for (std::string symbol : operations) {

		if (symbol == "+")
			record.push_back(record[record.size() - 1] + record[record.size() - 2]);

		else if (symbol == "D")
			record.push_back(2 * record.back());

		else if (symbol == "C")
			record.pop_back();

		else
			record.push_back(stoi(symbol));

		}

	return accumulate(record.begin(), record.end(), 0);


	// solution with stack


	/*std::stack<int> record;
	
	for (std::string symbol : operations) {

		 if (symbol == "+") {

			 if (record.size() >= 2) {

				 int top1 = record.top();
				 record.pop();
				 int top2 = record.top();
				 record.push(top1);
				 record.push(top1 + top2);

			 }

		}
		else if(symbol == "D") {

				 record.push(record.top() * 2);
				
		}
		else if (symbol == "C") {

				 record.pop();

		}
		else {
		 
			 int num = std::stoi(symbol);
			 record.push(num);
		 
		 }
		

	}

	int sum = 0;
	while (!record.empty()) {
	
		sum += record.top();
		record.pop();
	
	}

	return sum;*/

}

int main() {

	std::vector<std::string> ops = { "5","2","C","D","+" };

	std::cout << calPoints(ops);

}