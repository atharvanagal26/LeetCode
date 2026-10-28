class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        int n = words.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                string str1 = words[i];
                string str2 = words[j];
                if (str1.length() > str2.length()) {
                    continue;
                }
                bool isPrefix = (str2.substr(0, str1.length()) == str1);
                bool isSuffix = (str2.substr(str2.length() - str1.length()) == str1);
                if (isPrefix && isSuffix) {
                    count++;
                }
            }
        }
        return count;
    }
};