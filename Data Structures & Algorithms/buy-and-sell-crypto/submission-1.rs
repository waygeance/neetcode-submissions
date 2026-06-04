impl Solution {
    pub fn max_profit(prices: Vec<i32>) -> i32 {
        if prices.len() <= 1 {
            return 0;
        }

        let mut i = 0;
        let mut j = 1;
        let mut ans = 0;

        while j < prices.len() 
        {
            if prices[j] > prices[i] 
            {
                ans = ans.max(prices[j] - prices[i]);
                j += 1;
            } 
            
            else 
            {
                i = j;
                j += 1;
            }
        }

        ans
    }
}