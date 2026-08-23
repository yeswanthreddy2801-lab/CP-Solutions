class Solution {
public:
    bool squareIsWhite(string co) {
        int al=co[0]-97+1;
        int b1=co[1]-48;
        if((al%2==0 && b1%2==0) ||(al%2==1 && b1%2==1))
        {
            return false;
        }
        else return true;
    }
};