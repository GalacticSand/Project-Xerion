#include <string>
#include <vector>

class Inv {
        std::vector<char> n_cons;
        std::vector<char> n_vowl;
    public:
        char r_cons(int p) { return n_cons[p]; }
        char r_vowl(int p) { return n_vowl[p]; }
        
        void add_cons(char n) { n_cons.push_back(n); }
        void add_vowl(char n) { n_vowl.push_back(n); }
        void del_cons(int p) { n_cons.erase(n_cons.begin() + (p - 1)); }
        void del_vowl(int p) { n_vowl.erase(n_vowl.begin() + (p - 1)); }
};
