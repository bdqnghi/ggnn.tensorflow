int main()
{
	int n,first,second=0;
	char a;
	scanf("%d",&first);
	while(scanf("%c",&a)&&a==',')
	{
		scanf("%d",&n);
		if(n>first)
		{
			second=first;
			first=n;
		}
		else if(n==first)
			second=second;
		else if(n>second)
			second=n;
	}
    if(second==0)
		    printf("No\n");
	else
		    printf("%d\n",second);
	return 0;
}