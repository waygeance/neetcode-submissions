class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) 
    {
        let s1 = [...s].sort().join();
        let t1= [...t].sort().join();

        return s1===t1;
    }
}
