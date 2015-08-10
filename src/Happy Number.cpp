class Solution {

public:

    bool isHappy(int n) {

        std::unordered_map<int, int> m;

        while (n != 1) {

            m.insert(std::pair<int, int>(n, 1));

            int t = 0;

            while (n > 0) {

                t += (n % 10) * (n % 10);

                n /= 10;

            }

            n = t;

            if (m.find(n) != m.end())   return false;

        }

        return true;

    }

};
