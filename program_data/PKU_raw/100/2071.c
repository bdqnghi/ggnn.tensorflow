int f(char s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(64<s[i] && s[i]<123)
			return(0);
	}
	return(1);
}
int main()
{
	char s[300];
	char c;
	int i,j,sum=0;
	for(i=0;i<300;i++)
	{
		s[i]='0';
	}
	gets(s);
	if(f(s,300)==1)
		printf("No");
	else
	{		
		for(i=65;i<91;i++)
		{
			for(j=0;j<300;j++)
			{
				if(s[j]==i)
				{
					sum=sum+1;
					c=s[j];
				}
			}
			if(sum!=0)
			{
			printf("%c=%d\n",c,sum);
			}
			sum=0;
		}
		for(i=97;i<123;i++)
		{
			for(j=0;j<300;j++)
			{
				if(s[j]==i)
				{
					sum=sum+1;
					c=s[j];
				}
			}
			if(sum!=0)
			{
			printf("%c=%d\n",c,sum);
			}
			sum=0;
		}
	}
	return 0;
}