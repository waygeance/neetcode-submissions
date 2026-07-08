class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) 
    {
        int n= hand.size();
        int k= groupSize;
        if(n%k!=0) return false;

        multiset<int> ms;

        for(auto &it: hand) ms.insert(it);

        for(int i=0; i< n/k; i++)
        {
            int mini= *ms.begin();
            ms.erase(ms.begin());
            
            for(int j=0; j<k-1; j++)
            {
                auto temp = ms.find(mini+1);
                
                if(temp==ms.end()) return false;
                else
                {
                    mini= *temp;
                    ms.erase(temp);
                }

                cout<<mini<<endl;
                
            }
        }

        return true;
    }
};
