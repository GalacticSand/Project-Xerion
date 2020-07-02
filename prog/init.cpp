#include <string>
#include <vector>

// Class Definitions
class langInv {
        std::vector<std::string> w_co;
        std::vector<std::string> w_vo;
        std::vector<std::string> w_strc;
    public:
        std::string r_co(int p) { return w_co[p]; }
        std::string r_vo(int p) { return w_vo[p]; }
        
        int r_co_size() { return w_co.size(); }
        int r_vo_size() { return w_vo.size(); }
        
        void add_co(std::string n) { w_co.push_back(n); }
        void add_vo(std::string n) { w_vo.push_back(n); }
        void del_co(int p) { w_co.erase(w_co.begin() + (p - 1)); }
        void del_vo(int p) { w_vo.erase(w_vo.begin() + (p - 1)); }
        void genr_strc(std::string n) {
                w_strc = {};
                for (int i = 0; i < n.length(); i++) { w_strc.push_back(n.at(i)); }}
        
        void change_co_bnum(int p, std::string n) {
                w_co[p] = n;}
        void change_vo_bnum(int p, std::string n) {
                w_vo[p] = n;}
        void change_co_blet(std::string o, std::string n) {
                int i = 0;
                while (o != w_co[i]) {
                        i++;}
                change_co_bnum(i, n);}
        void change_vo_blet(std::string o, std::string n) {
                int i = 0;
                while (o != w_vo[i]) {
                        i++;}
                change_vo_bnum(i, n);}
                
};
class langWord {
        std::vector<std::string> s_lttr;
    public:
        void genr_word(std::string n) {
                s_lttr = {};
                for (int i = 0; i < n.length(); i++) { s_lttr.push_back(n.at(i)); }}
        void print_word() {
                for (int i = 0; i < s_lttr.size(); i++) { std::cout << s_lttr[i]; }
                std::cout << std::endl;}
        
        std::string shift_s(std::string w, std::string ol, std::string nl) {
                std::vector<std::string> t_lttr;
                std::string t_word;
                for (int i = 0; i < w.length(); i++) { t_lttr.push_back(w.at(i); }
                i = 0;
                while (ol != t_lttr[i]) { i++; }
                t_lttr.erase(t_lttr.begin() + i);
                t_lttr.insert(t_lttr.begin() + i);
                for (i = 0; i < t_lttr.size(); i++) { t_word.append(t_lttr[i]); }
                return t_word;}
        std::string shift_s_cond(std::string w, std::string ol, std::string nl, std::string cond) { 
                std::vector<std::string> t_lttr;
                std::string t_word;
                for (int i = 0; i < w.length(); i++) { t_lttr.push_back(w.at(i); }
                i = 0;
                while (ol != t_lttr[i]) { i++; }
                switch (cond) { }  // Add the cases that do conditional changes later....
                t_lttr.erase(t_lttr.begin() + i);
                t_lttr.insert(t_lttr.begin() + i);
                for (i = 0; i < t_lttr.size(); i++) { t_word.append(t_lttr[i]); }
                return t_word;}
};

// Function Definitions
