#include <string>
#include <vector>

// Variables and Arrays
std::vector<std::string> sh_init, sh_res, sh_con;

// Basic Functions
template <class dx_type>
int get_index(std::vector<dx_type> list, dx_type item) {
    int v;
    for (int i = 0; i < list.size(); i++) { if (list[i] == item) { v = i; } }
    return v;
}

// Advanced Functions
void phon_sh_rule(std::string init, std::string res, std::string con) {
    sh_init.push_back(init);
    sh_res.push_back(res);
    sh_con.push_back(con);
}

// Classes
class phon_type { 
        std::string tag;
        std::vector<std::string> stag;
        std::vector<std::string> col;
    public:
        phon_type(std::string t) { tag = t; }
        std::string get_tag() { return tag; }
        std::string get_stag(int dx) { return stag[dx]; }
        std::string get_phon(int dx) { return col[dx]; }
        void ch_phon(int dx, std::string n_phon) { col[dx] = n_phon; }
        void ch_spec_phon(std::string o_phon, std::string n_phon) { col[get_index<std::string>(col, o_phon)] = n_phon; }
};

class word_list {
        std::vector<std::string> list;
        std::vector<std::string> wdec;
    public:
        std::string get_word(int dx) { return list[dx]; }
        std::string get_word_lttr(int dx, int lttr) { return std::to_string(list[dx].at(lttr)); }
        std::string get_split_lttr(int dx) { return wdec[dx]; }
        std::vector<std::string> get_list(int s = 0, int fn = list.size()-1) { 
            std::vector<std::string> list_sect = {};
            for (int i = s; i < fn+1; i++) { list_sect.push_back(list[i]); }
            return list_sect; 
        }
        std::vector<std::string> get_wdec(int s = 0, int fn = wdec.size()-1) { 
            std::vector<std::string> wdec_sect = {};
            for (int i = s; i < fn+1; i++) { wdec_sect.push_back(wdec[i]); }
            return wdec_sect; 
        }
        void add_word(std::string n_word) { list.push_back(n_word); }
        void sh_split_lttr(int dx, std::string n_lttr) { wdec[dx] = n_lttr; }
        void split_word(int dx) {
            wdec = {};
            std::string w = list[dx];
            for (int i = 0; i < w.length(); i++) { wdec.push_back(std::to_string(w.at(i))); }
        }
        void rebuild_word(int dx) {
            std::string w = "";
            for (int i = 0; i < wdec.size(); i++) { w.append(wdec[i]); }
            list[dx] = w;
        }
};
