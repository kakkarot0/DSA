class Solution {
public:
    int maximum69Number (int num) {
        int numcopy=num;
        int countdigit=0;
        int firstindexsix=-1;
        while(numcopy>0){
            if(numcopy%10==6){
                firstindexsix=countdigit;
            }
            numcopy=numcopy/10;
            countdigit++;
        }
        return (firstindexsix==-1?num:num+3*pow(10,firstindexsix));
    }
};