class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> adj(n + 1);
        for (auto t : times) 
            adj[t[0]].push_back({t[1], t[2]});

        vector<int> dist(n + 1, INT_MAX);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

        dist[k] = 0;
        pq.push({0, k});

        while (!pq.empty()) {
            auto [time, node] = pq.top();
            pq.pop();

            if (time > dist[node]) continue;

            for (auto [nei, w] : adj[node]) {
                if (time + w < dist[nei]) {
                    dist[nei] = time + w;
                    pq.push({dist[nei], nei});
                }
            }
        }

        int ans = *max_element(dist.begin() + 1, dist.end());

        if (ans == INT_MAX) {
            return -1;
        }

        return ans;
    }
};