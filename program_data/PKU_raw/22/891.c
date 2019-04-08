int main()
{
	int first,second,in;
	char c;
	second=0;
	scanf("%d",&first);
	scanf("%c",&c);
	while(c==',')
	{
		scanf("%d",&in);
		if(in>first)
		{
			second=first;
			first=in;
		}
		else
		{
			if(in==first)
				second=second;
			else
			{
			if(in>second)
				second=in;
			}
		}
		scanf("%c",&c);
	}
	if(second==0)
		printf("No");
	else
		printf("%d",second);
	
}
