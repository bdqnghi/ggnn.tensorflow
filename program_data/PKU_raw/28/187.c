void main()
{
	char s;
	
	int i=0,m;
	while((s=getchar())!='\n')
	{
		if(s!=' ')
		{
		i++;
		}
		else if(i>0)
		{
		printf("%d,",i);
		i=0;
		}
	}
	printf("%d",i);
	
}