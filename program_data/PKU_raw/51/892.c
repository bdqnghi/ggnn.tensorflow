void main()
{
	char s[500][500],t[500][500];
	int k,flag,l,max;
	int x[500]={0};
	char a[500];
	int i,n,c,j,zichuanshu;
	scanf("%d",&n);
	scanf("%s",a);
	c=strlen(a);
	for(i=0;i<=c-n;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			s[i][j]=a[i+j];
		}
	}
	zichuanshu=i;
	for(j=0;j<n;j++)
	{
		t[0][j]=s[0][j];
	}
	k=1;
	x[0]=0;
	for(i=1;i<zichuanshu;i++)
	{
		for(l=0;l<k;l++)
		{
			flag=0;
			for(j=0;j<n;j++)
			{
				if(s[i][j]!=t[l][j])
				flag=1;
			}
			if(flag==0)	
			{
				x[l]++;
				break;
			}
		}
			if(flag==1)
			{
				for(j=0;j<n;j++)
				{
					t[k][j]=s[i][j];
				}

					k++;
			}
		
	}
	max=x[0];
	for(i=1;i<k-1;i++)
	{
		if(x[i]>max)
		{
			max=x[i];
		}
	}
	if(max==0)
	{
		printf("NO");
	}
	else
	{   printf("%d\n",max+1);
		for(i=0;i<=k-1;i++)
		{
			if(x[i]==max)
			{
				for(j=0;j<n-1;j++)
				{
					printf("%c",t[i][j]);
				}
				printf("%c\n",t[i][n-1]);
			}
		}
	}
}