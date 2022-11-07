class Solution {
public:
    int maximum69Number (int num) {
          string s_num=to_string(num);
        //converted to string
          for(auto &c : s_num){
              if(c=='6'){
                  c='9';
                  break;
                  //for the maximum we need to change the firt digit to 9
              }
              
          }
        return stoi(s_num);
    }
};