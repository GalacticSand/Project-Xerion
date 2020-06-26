#include <string>
#include <vector>

class Inv {
        std::vector<char> s_cons;
        std::vector<char> s_vowl;
    public:
        char r_cons(int p) { return s_cons[p]; }
        char r_vowl(int p) { return s_vowl[p]; }
        
        void add_cons(char n) { s_cons.push_back(n); }
        void add_vowl(char n) { s_vowl.push_back(n); }
        void del_cons(int p) { s_cons.erase(s_cons.begin() + (p - 1)); }
        void del_vowl(int p) { s_vowl.erase(s_vowl.begin() + (p - 1)); }
};
