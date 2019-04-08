int main()
{
	int n,i,j,e;
	int k=1,s=0;
	int a[500],b[500];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&(a[i]));
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			b[k]=a[i];
			k++;
			s++;
		}
	}
	for(j=0;j<s;j++)
	{
		for(k=1;k<=s-j;k++)
		{
			if(b[k]<b[k+1])
			{
				e=b[k+1];
			    b[k+1]=b[k];
			    b[k]=e;
			}
		}
		if(s-j!=1)
		{
		printf("%d,",b[s-j]);
		}
		if(s-j==1)
		{
			printf("%d",b[s-j]);
		}
	}
	return 0;
}
	
