#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> split(std::string str, char delim)
{
    std::string curr = "";
    std::vector<std::string> result;

    for (char chr : str) {
	if (chr != delim) {
	    curr += chr;
	}
	else {
	    result.push_back(curr);
	    curr = "";
	}
    }

    result.push_back(curr);

    return result;
}

int main()
{
    std::string input = "";
    std::vector<double> stack;

    while (input != "quit") {
	std::cin >> input;
	std::vector<std::string> tokens = split(input, ' ');

	for (auto token : tokens) {
	    if (!isdigit(token[0])) {
		double result = stack.back();
		stack.pop_back();
		switch (token[0]) {
		case '+': result = stack.back() + result; break;
		case '-': result = stack.back() - result; break;
		case '*': result = stack.back() * result; break;
		case '/': result = stack.back() / result; break;
		}
		stack.pop_back();
		stack.push_back(result);
		std::cout << stack.back() << "\n";
	    }
	    else {
		stack.push_back(std::stod(token));
	    }
	}
    }

    return 0;
}
		
