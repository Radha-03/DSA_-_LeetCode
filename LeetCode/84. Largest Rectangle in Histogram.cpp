// find leftr most index which value smaller then currun and maintain in array
// find right most index which value smaller then currun and maintain in array using stack
// find max area from area=heights[i]*(right[i]-left[i]-1);

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int n=heights.size();
        vector<int> left(n,-1);
        vector<int> right(n,n);

        for(int i=0;i<n;i++){
            
            while(!s.empty()&&heights[s.top()]>=heights[i]){
                s.pop();
            }

            if(s.empty()){
                s.push(i);
                continue;
            }
            left[i]=s.top();
            s.push(i);
        }

        while (!s.empty()) s.pop();

        for(int i=n-1;i>=0;i--){
            
            while(!s.empty()&&heights[s.top()]>=heights[i]){
                s.pop();
            }

            if(s.empty()){
                s.push(i);
                continue;
            }
            right[i]=s.top();
            s.push(i);
        }
        int maxarea=0;

        for(int i=0;i<n;i++){
            int area=heights[i]*(right[i]-left[i]-1);
            maxarea=max(maxarea,area);
        }
        return maxarea;
    }
};
