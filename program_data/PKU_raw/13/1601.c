int main()
{
	int a[10000],n,i,j,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j]&&i>j)
			{
				t=0;
				break;
			}
			else t=1;
		}
		if(t==0)printf("\0");
		else 
		{
			if(i>0)printf(" %d",a[i]);
			else printf("%d",a[i]);
		}
	}			
	return 0;
}