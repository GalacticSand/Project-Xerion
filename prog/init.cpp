#include <string>
#include <vector>

class Inv {
        std::vector<char> n_cons;
        std::vector<char> n_vowl;
    public:
        char r_cons(int p) { return n_cons[p]; }
        char r_vowl(int p) { return n_vowl[p]; }
        void add_cons(char nc) { n_cons.push_back(nc); }
        void del_cons(int p) { n_cons.erase(n_cons.begin() + (p - 1)); }
        void add_vowl(char nv) { n_vowl.push_back(nv); }
        void del_vowl(int p) { n_vowl.erase(n_vowl.begin() + (p - 1)); }
};
