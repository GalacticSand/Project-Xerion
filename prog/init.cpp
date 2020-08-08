#include <string>
#include <vector>

// Function Definitions
template <class dx_type>
int get_index(std::vector<dx_type> list, dx_type item) {
    int v;
    for (int i = 0; i < list.size(); i++) { if (list[i] = item) { v = i; } }
    return v;
}

// Class Definitions
class phon_type { 
        std::string tag;
        std::vector<std::string> col;
    public:
        phon_type(std::string t) { tag = t; }
        void ch_phon(int dx, std::string n_phon) { col[dx] = n_phon; }
        void ch_spec_phon(std::string o_phon, std::string n_phon) { col[get_index<std::string>(col, o_phon)] = n_phon; }
        }
};

class phon_sh_rule { 
        std::string init;
        std::string res;
        std::string con;
    public:
        phon_sh_rule(std::string in, std::string r, std::string c) {
            init = in;
            res = r;
            con = c;
        }
};
