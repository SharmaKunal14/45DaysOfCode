class StockSpanner {
public:
    StockSpanner() {
        
    }
    stack<pair<int,int>> a;
    int next(int price) {
        int count=1;
    while(!a.empty() && a.top().first<=price) {
        count+=a.top().second;
        a.pop();
    }
    a.push({price,count});
    return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */