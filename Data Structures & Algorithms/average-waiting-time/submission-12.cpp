class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long waittime = 0;
        long long serve = 0;
        for (vector<int> customer:customers){
        long long    arrival = customer[0];
        long long    time = customer[1];
            serve = max(arrival + time, serve + time);
            waittime += serve - arrival;
        } 
        return static_cast<double>(waittime)/(customers.size());
        


         
    }
};


// class Solution:
//     def averageWaitingTime(self, customers: List[List[int]]) -> float:
//         ans = [0] * len(customers)

//         free = 0

//         for i in range(len(customers)):
//             ans[i] = max(free, customers[i][0]) + customers[i][1] - customers[i][0]
//             free = max(free, customers[i][0]) + customers[i][1]
//         print(ans)
//         return sum(ans) / len(ans)