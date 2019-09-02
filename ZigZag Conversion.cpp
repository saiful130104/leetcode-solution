string convert(string s, int numRows) {
        string str[numRows];
        int sz = s.size();
        for(int i=0; i<sz;)
        {
            for(int j=0;j<numRows && i<sz; j++,i++)
                str[j]=str[j]+s[i];
            for(int j=numRows-2; j>0 && i<sz; i++,j--)
                str[j]=str[j]+s[i];
        }
        s ="";
        for(int i=0; i<numRows; i++)
            s = s+str[i];
        return s;
    }