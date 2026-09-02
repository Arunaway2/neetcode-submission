class Solution {
public:
    int countSeniors(vector<string>& details) {
        int counter = 0;
        for( string s : details){
            string age_str = s.substr(11, 2);
            if (stoi(age_str) > 60){
                counter ++;
            }
        }
        return counter;
    }
};