
https://www.codingninjas.com/studio/problems/next-greater-element_670312?leftPanelTab=0

code:

#include<stack>
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
	vector<int>ans(n);
	stack<int>inter;
	for(int i=n-1;i>=0;i--)
	{
		while(!inter.empty() && arr[i]>=inter.top())
		{
			inter.pop();
		}
		if(inter.empty())
		{
			ans[i]=-1;
		}
		else
		{
			ans[i]=inter.top();
		}
		inter.push(arr[i]);
	}
	
	return ans;
}
