int main()
{
	int n;
	int i,j,flag;
	int a[MAX];
	scanf("%d",&n);
	a[0]=1;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		flag=1;
	    for(j=i-1;j>=0;j--)
		{
			if(a[i]==a[j])
			{
				flag=0;
				break;
			}
        }
		if(flag==1)
			if(i>1)
		       printf(" %d",a[i]);
			else
				printf("%d",a[i]);
	}
	return 0;
}



