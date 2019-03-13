class Solution {
public:
    bool isValid(string s) {
        std::stack<char> Stack;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
		{
			Stack.push(s[i]);
		}
		else
		{
			if (Stack.empty())
			{
				return false;
			}
			if (s[i]==')'&&Stack.top() != '(')return false;
			if (s[i] == ']'&&Stack.top() != '[')return false;
			if (s[i] == '}'&&Stack.top() != '{')return false;
			Stack.pop();
		}

	}

	return(Stack.empty() ? true : false);
    }
};