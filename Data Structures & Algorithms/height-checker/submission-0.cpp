class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>sortedheights = heights;
        sort(sortedheights.begin(), sortedheights.end());

        int counter = 0;
        for (int i = 0; const auto &h:sortedheights){
            printf("%d %d \n", heights[i], h);
            if (heights[i] != h){
                counter++;
            }
            i++;
        }
        return counter;

    }
};