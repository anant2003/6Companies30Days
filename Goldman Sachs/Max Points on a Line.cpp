class Solution{
public:
    int maxPoints(vector<vector<int>>& points) 
    {
        if(points.size()<=2) return points.size();
        int res=0;
        int n=points.size();
        for(int j=0;j<n;j++){

            for(int k=j+1;k<n;k++){

                int x1 = points[j][0];
                int x2 = points[k][0];
                int y1 = points[j][1];
                int y2 = points[k][1];    

                int total=2;
                for(int l=0;l<n && l!=j && l!=k;l++){
                    
                    int x = points[l][0];
                    int y = points[l][1];
                    
                    if((y2 - y1)*(x - x1) == (x2 - x1)*(y - y1))
                        total++;
                }
                res = max(res, total);
            }
        }
        return res;
    }
};


