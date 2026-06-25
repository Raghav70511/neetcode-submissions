class Solution {
public:

    string encode(vector<string>& strs) {

        string ans;

        for (string str : strs) {
            ans += to_string(str.size()) + "#" + str;
        }

        return ans;
    }

    vector<string> decode(string s) {

        vector<string> ans;

        int i = 0;

        while (i < s.size()) {

            string len = "";

            while (s[i] != '#') {
                len += s[i];
                i++;
            }

            int length = stoi(len);

            i++; // skip '#'

            string word = "";

            for (int j = 0; j < length; j++) {
                word += s[i];
                i++;
            }

            ans.push_back(word);
        }

        return ans;
    }
};