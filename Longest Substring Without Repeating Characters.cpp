int lengthOfLongestSubstring(string s) {
        int sz = s.size(),ans=0 , lo=0,ck;
        map<char,bool>mp;
        for(int i=0; i<sz; i++)
        {
            char ch = s[i];
            if(mp[ch])
            {
                ans = max(ans,i-lo);
                while(lo<=i)
                {
                    if(s[lo]==ch)
                    {
                        ck=0;
                        lo++;
                        break;
                    }
                    lo++;
                }
            }
            else
                ck=1;
            mp[ch]=1;
        }
        if(ck)
        {
            if(lo)
                ans = max(ans,sz-lo+1);
            else
                ans = max(ans,sz-lo);
        }
        return ans;
  }