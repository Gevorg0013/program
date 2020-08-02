#include <iostream>
#include <string>
#include <stack>

bool check_breckets(const std::string& str)
{
	std::stack<char> stk;

	for (char c : str)
	{
		switch (c)
		{
		case '{':
		case '(':
		case '[':
		{
			stk.push(c);
			break;
		}
		case '}':
		{
			if (stk.empty() || stk.top() != '{') return false;
			stk.pop();
			break;
		}
		case ')':
		{
			if (stk.empty() || stk.top() != '(') return false;
			stk.pop();
			break;
		}
		case ']':
		{
			if (stk.empty() || stk.top() != '[') return false;
			stk.pop();
			break;
		}
		}
	}
	return stk.empty();
}

int main()
{
	std::string str = "m[kd]{s}";
	std::cout << std::boolalpha << check_breckets(str) << std::endl;
	return 0;
}