int main()
{
	char c[501];
	int a[500][500]={0};
	int n,v=1,s=1,ss,smax=1;
	int i,j,k;

	scanf("%d",&n);
	scanf("%s",c);

	for(i=0;c[i+n-1]!=0;i++)
	{
		ss=1;
		for(j=i+1;c[j+n-1]!=0;j++)
		{
			
			for(k=0;k<n;k++)
			{
				if(c[i+k]!=c[j+k])
				{
					s=0;
					break;
				}
				else
				{
					s=1;
				}
			}
			if(s)
			{
				ss++;
				if(ss>smax)
					smax=ss;
			}
		}
		if(ss>1)
		{
			a[i][ss]=1;
		}
	}
	if(smax>1)
	{
		printf("%d\n",smax);
		for(i=0;i<500;i++)
		{
			if(a[i][smax]==1)
			{
				for(j=0;j<n;j++)
				{
					printf("%c",c[i+j]);
				}
				printf("\n");
			}
			
		}
	}
	else
		printf("NO");
	return 0;
}