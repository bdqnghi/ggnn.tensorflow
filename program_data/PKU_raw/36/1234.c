int main()
{
	char a[128],b[128];
	int c[64],d[64];
	int i,sum,j;
	for(i=0;i<128;i++)
	{
		c[i]=0;
		d[i]=0;
	}
	char ch='A';
	scanf("%s",a);
    scanf("%s",b);
	if((int)strlen(a)==(int)strlen(b))
	{
		j=0;
		sum=0;
		for(j=0;j<128;j++)
		{
		    for(i=0;i<=62;i++)
			{
			    ch='A'+i;
			    if(a[j]==ch)
				{
			        c[i]=c[i]+1;
				}
		        if(b[j]==ch)
				{
			        d[i]=d[i]+1;
				}
			}
		}
		for(i=0;i<=62;i++)
		{
			if(c[i]!=d[i])
			{
				sum=sum+1;
			}
		}
		if(sum==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	else
	{
		printf("NO\n");
	}
    return 0;
}
