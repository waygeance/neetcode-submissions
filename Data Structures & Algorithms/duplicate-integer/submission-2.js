class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) 
    {
        let n= nums.length;

        const s = new Set();

        for(let i=0; i<n; i++)
        {
            s.add(nums[i]);
        }

        return n !== s.size;
    }
}
