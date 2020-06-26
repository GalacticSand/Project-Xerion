#include <string>
#include <vector>

class langInv {
        std::vector<std::string> w_co;
        std::vector<std::string> w_vo;
        std::vector<std::string> w_struct;
    public:
        char r_co(int p) { return w_co[p]; }
        char r_vo(int p) { return w_vo[p]; }
        
        void add_co(std::string n) { w_co.push_back(n); }
        void add_vo(std::string n) { w_vo.push_back(n); }
        void del_co(int p) { w_co.erase(w_co.begin() + (p - 1)); }
        void del_vo(int p) { w_vo.erase(w_vo.begin() + (p - 1)); }
};
