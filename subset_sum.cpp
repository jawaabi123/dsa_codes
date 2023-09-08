https://www.codingninjas.com/studio/problems/subset-sum_3843086?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

bit manipulation:

vector<int> subsetSum(vector<int> &num)
{
	int n=num.size();
	vector<int>ans;
	for(int i=0;i<(1<<n);i++)
	{
       int sum=0;
	   for(int j=0;j<n;j++)
	   {
		   if(i & 1<<j)
		     sum+=num[j];
	   }
	   ans.push_back(sum);
	}
	sort(ans.begin(),ans.end());
	return ans;
}

recursion:

void rec(int i,vector<int>&ans,vector<int> &num,int n,int sum)
{
	if(i>=n)
	{
		ans.push_back(sum);
		return;
	}
	rec(i+1,ans,num,n,sum);
    sum+=num[i];
    rec(i+1,ans,num,n,sum);
    
    

}


vector<int> subsetSum(vector<int> &num)
{
	int n=num.size();
	vector<int>ans;
	rec(0,ans,num,n,0);
	sort(ans.begin(),ans.end());
	return ans;
}
