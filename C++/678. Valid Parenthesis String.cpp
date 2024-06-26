class Solution {
public:
    bool checkValidString(std::string s) {
        stack<int> open, star;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                open.push(i);
            } else if (s[i] == '*') {
                star.push(i);
            } else {  // closing parenthesis encountered
                if (!open.empty()) {
                    open.pop();
                } else if (!star.empty()) {
                    star.pop();
                } else {
                    return false;  // Unmatched closing parenthesis
                }
            }
        }

        // Match remaining open parentheses with asterisks
        while (!open.empty() && !star.empty()) {
            if (open.top() < star.top()) {
                open.pop();
                star.pop();
            } else {
                break;
            }
        }

        return open.empty();
    }
};