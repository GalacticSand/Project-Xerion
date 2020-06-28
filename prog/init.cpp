#include <string>
#include <vector>

// Class Definitions
class langInv {
        std::vector<std::string> w_co;
        std::vector<std::string> w_vo;
        std::vector<std::string> w_struct;
    public:
        std::string r_co(int p) { return w_co[p]; }
        std::string r_vo(int p) { return w_vo[p]; }
        
        int r_co_size() { return w_co.size(); }
        int r_vo_size() { return w_vo.size(); }
        
        void add_co(std::string n) { w_co.push_back(n); }
        void add_vo(std::string n) { w_vo.push_back(n); }
        void del_co(int p) { w_co.erase(w_co.begin() + (p - 1)); }
        void del_vo(int p) { w_vo.erase(w_vo.begin() + (p - 1)); }
        
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
        std::vector<std::string> s_letters;
    public:
        void genr_word(std::string n) {
                s_letters = {};
                for (int i = 0; i < n.length(); i++) {
                        s_letters.push_back(n.at(i));
                }}
        void print_word() {
                for (int i = 0; i < s_letters.size(); i++) {
                        std::cout << s_letters[i];}
                std::cout << std::endl;}
};

// Function Definitions
