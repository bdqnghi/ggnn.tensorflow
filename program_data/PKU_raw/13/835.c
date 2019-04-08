int main()
{
	int n,i,j,a[100001],b[100001],temp=1; //temp??????b[100001]??????? 
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		b[0]=a[0];	
		for (j=0;j<i;j++)
		{
			if (a[i]==a[j]) break;     //?????????????? 
			if (j==i-1)               //???????? 
			{
				b[temp]=a[i];
				temp++;	
			}	
		}	
	}
	for (i=0;i<temp-1;i++)
	{
		cout<<b[i]<<" ";	
	}
	cout<<b[temp-1];
	return 0;	
}