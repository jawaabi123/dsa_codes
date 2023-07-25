vector<int> getFrequencies(vector<int> &v)
{
    int n=v.size();

    map<int,int>mpp;

    for(int i=0;i<n;i++)
    {
        mpp[v[i]]++;
    }
    int min_frequency=INT_MAX;
    int max_frequency=INT_MIN;
    int min_element;
    int max_element;
    for(auto it:mpp)
    {
      if(it.second<min_frequency)
      {
          min_frequency=it.second;
          min_element=it.first;
          
      }
      if(it.second>max_frequency)
      {
          max_frequency=it.second;
          max_element=it.first;
          
      }
    }
    
   
    return {max_element,min_element};
}
