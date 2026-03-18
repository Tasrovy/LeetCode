class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        return match(haystack.c_str(), needle.c_str(), 0);
    }

    int match(const char* h, const char* n, int start) {
        if (*h == '\0') return -1;

        if (checkEqual(h, n)) {
            return start;
        }

        return match(h + 1, n, start + 1);
    }

    bool checkEqual(const char* h, const char* n) {
        if (*n == '\0') return true;
        if (*h == '\0') return false;
        if (*h != *n)   return false;
        
        return checkEqual(h + 1, n + 1);
    }
};
