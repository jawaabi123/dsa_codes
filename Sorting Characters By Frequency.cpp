string sortByFrequency(int n, string& s)
{
	  map<char, int> mp;
      vector<pair<int,char>>v;
      int i;
      string res="";
      for(i=0; i<n; i++){
        mp[s[i]]++;
        }
       for(auto it: mp){
         v.push_back({it.second,it.first});
       }
       sort(v.begin(),v.end(),greater<pair<int,char>>());
       
       for(auto it: v){
         res=res+string(it.first,it.second);
       } 
      
      
  return res;
}
