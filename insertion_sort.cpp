void insertionSort(int n, vector<int> &arr)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}