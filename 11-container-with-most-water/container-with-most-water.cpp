class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int i = 0;
        int j = height.size()-1;
        while (i<j)
        {
            int current = min(height[i],height[j])*abs(j-i);
            maxArea = max(maxArea , current);
            if(height[j] > height[i])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxArea;
    }
};