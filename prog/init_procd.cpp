#include <string>
#include <vector>

// Basic Functions
template <class dx_type>
int get_index(std::vector<dx_type> list, dx_type item) {
    int v;
    for (int i = 0; i < list.size(); i++) { if (list[i] == item) { v = i; } }
    return v;
}

// Classes
class phon_type { 
        std::string tag;
        std::vector<std::string> stag, col;
    public:
        phon_type(std::string t) { tag = t; }
        std::string get_tag() { return tag; }
        std::string get_stag(int dx) { return stag[dx]; }
        std::string get_phon(int dx) { return col[dx]; }
        void ch_phon(int dx, std::string n_phon) { col[dx] = n_phon; }
        void ch_spec_phon(std::string o_phon, std::string n_phon) { col[get_index<std::string>(col, o_phon)] = n_phon; }
};

class word_list {
        std::vector<std::string> list, wdec;
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
        void del_word(int dx) { }
        void del_last_word() { list.pop_back(); }
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

class change_set {
        std::vector<std::string> init, res, cond;
    public:
        void add_rule(std::string n, std::string r, std::string c = "ALL") {
            init.push_back(n);
            res.push_back(r);
            cond.push_back(c);
        }
        void del_rule(int dx) { }
        void del_last_rule() {
            init.pop_back();
            res.pop_back();
            cond.pop_back();
        }
}
