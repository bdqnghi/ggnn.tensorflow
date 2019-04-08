
int main()
{
	int n,i,x;
	int first,second;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(i==0)
		{
			first=x;
			second=x;
		}
		else if(i==1)
		{
			if(x>first)
			{
				second=first;
				first=x;
			}
			else if(x=first)
			{
				second=x;
				first=x;
			}
		}
		else
		{
			if(x>first)
			{
				second=first;
				first=x;
			}
			else if(x>second)
			{
				second=x;
			}
		}
	}
	printf("%d\n",first);
	printf("%d\n",second);
	return 0;
}
