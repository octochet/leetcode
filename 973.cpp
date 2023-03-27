struct comparex {
        bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
            return p1.first >= p2.first;
        }
    };

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int,int>, vector<pair<int,int>>, comparex> pq;

        for(int i=0; i<points.size(); i++) {
            int x=points[i][0];
            int y=points[i][1];
            int distance = x*x+y*y;
            pq.push({distance,i});
        }

        while(k--) {
            int i = pq.top().second;
            ans.push_back(points[i]);
            pq.pop();
        }
        return ans;
    }
    
};