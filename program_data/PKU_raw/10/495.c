int main()
{
	int k;
	cin>>k;
	int high[30];
	int num[30]={0};
	int i,j;	
	for(i=0;i<k;i++)
	{
		cin>>high[i];		
	}
	num[0]=1;
	for(i=1;i<k;i++)
	{
		int max=0;
		for(j=i-1;j>=0;j--)
		{
			if(high[i]<=high[j])
			{
				if(max<num[j])
					max=num[j];
			}
		}
		num[i]=max+1;
	}	
	sort(num,num+k);
	printf("%d",num[k-1]);
	return 0;
}