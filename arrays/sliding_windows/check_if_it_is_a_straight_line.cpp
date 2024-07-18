class Solution {
public:

    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int n = coordinates.size();
        if(coordinates.size() <= 2)
            return true;

        int ct=0;
        float m=float(coordinates[1][1]-coordinates[0][1])/float(coordinates[1][0]-coordinates[0][0]);
        for(int i=0;i<n-1;i++){
            if(coordinates[i][0]-coordinates[i+1][0]==0)ct++;
        }

        if(ct == n-1)
            return true;

        for(int i=1;i<n-1;i++){
            float x=float(coordinates[i+1][1]-coordinates[i][1])/float(coordinates[i+1][0]-coordinates[i][0]);

            if(x!=m)return false;
        }

        return true;
    }
};
