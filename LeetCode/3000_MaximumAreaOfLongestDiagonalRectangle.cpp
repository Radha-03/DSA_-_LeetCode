// 3000. Maximum Area of Longest Diagonal Rectangle
/**You are given a 2D 0-indexed integer array dimensions.

For all indices i, 0 <= i < dimensions.length, dimensions[i][0] represents the length and dimensions[i][1] represents the width of the rectangle i.

Return the area of the rectangle having the longest diagonal. If there are multiple rectangles with the longest diagonal, return the area of the rectangle having the maximum area.

 **/

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        float max=INT_MIN,diagonal;
        int areaIndex;
        for(int i=0;i<dimensions.size();i++) {
            diagonal=sqrt(dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1]);
            if(max==diagonal){
                if((dimensions[areaIndex][0]*dimensions[areaIndex][1])<(dimensions[i][0]*dimensions[i][1])){
                    areaIndex=i;
                }
            }
            else if(max<diagonal){
                max=diagonal;
                areaIndex=i;
            }
        }
        return dimensions[areaIndex][0]*dimensions[areaIndex][1];
    }
};
