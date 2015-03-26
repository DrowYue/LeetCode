class Solution {
public:
    string intToRoman(int num) {
        map<int, string, greater<int>> m = {{1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"}, {40, "XL"},
        {50, "L"}, {90, "XC"}, {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}};
        string roman;
        while (num > 0) {
            for (map<int, string, greater<int>>::iterator it = m.begin(); it != m.end(); ++it) {
                if (num >= it->first) {
                    roman += it->second;
                    num -= it->first;
                    break;
                }
            }
        }
        return roman;
    }
};