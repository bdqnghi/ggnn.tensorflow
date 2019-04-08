int main()
{
    int i,j,n;
	int a[10000];
    for(i=1;i<=10000;i++)
		a[i]=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&j);
		if(a[j]==0)
		{  
		    a[j]=1;
			if(i==1)
				printf("%d",j);
			else
				printf(",%d",j);
		}
	}

	return 0;
}