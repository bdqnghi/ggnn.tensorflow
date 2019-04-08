int sta[20002];
int mycmp(const void *a,const void *b)
{
	return *(int*)a-*(int*)b;
}
int main()
{
	int input[30]={0};
	int cnt[30]={0};
	int n;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
		cin>>input[i];
	cnt[0]=1;
	for(i=1;i<n;i++)
	{
		int max=0;
		for(int k=i-1;k>=0;k--)
		{
			if(cnt[k]>max&&input[k]>=input[i])
				max=cnt[k];
		}
		cnt[i]=max+1;
	}
	int m=0;
	for(i=0;i<n;i++)
		if(m<cnt[i])
			m=cnt[i];
	cout<<m<<endl;
	return 0;
}
			


