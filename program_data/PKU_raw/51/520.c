int main()
{
	int n,i,j,k,b=0,c[500];
	char a[500];
	for(i=0;i<500;i++)
	{
		c[i]=1;
	}
    scanf("%d",&n);
	scanf("%s",a);
	int len=strlen(a);
	for(k=0;k<len-n+1;k++)
	{
		for(i=k+1;i<len-n+1;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[k+j]==a[i+j])
				{
					b++;
				}
			}
			if(b==n)
			{
				c[k]++;
			}
			b=0;
		}
			
	}
	int max=1;
	for(i=0;i<len;i++)
	{
		if(c[i]>max)
			max=c[i];
	}
	if(max==1)
	{
		printf("NO");
	}
	else
	{
		printf("%d\n",max);
		for(i=0;i<len-n+1;i++)
		{
			if(c[i]==max)
			{
				for(j=i;j<i+n;j++)
				{
					printf("%c",a[j]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}

		
