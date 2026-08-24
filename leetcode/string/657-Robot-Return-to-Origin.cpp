class Solution {
public:
    bool judgeCircle(string moves) {
        int n=moves.size();
        int u=0,l=0;
        for(int i=0;i<n;i++)
        {
            if(moves[i]=='U')
            {
                u++;
            }
            else if(moves[i]=='D')
            {
                u--;
            }
            else if(moves[i]=='L')
            {
                l++;
            }
            else l--;
        }
        if(l==0 && u==0)
        return true;
        else return false;

    }
};