int main()
{
	char zfc[300],*ps;
	int c=0;
	int n;
	int i=0,count=0;
	char a=97;
	char A=65;
	gets(zfc);
	while(A>=65&&A<=90)
	{
		for(ps=zfc;*ps!='\0';ps++)
			if(*ps==A)
			{	
				count++;
			}
			if(count!=0)
			{
				printf("%c=%d\n",A,count);
				c=1;
			}
			count=0;
			A++;
		
	}
	while(a<=122&&a>=97)
	{
		for(ps=zfc;*ps!='\0';ps++)
			if(*ps==a)
			{	
				count++;
			}
			if(count!=0)
			{
				printf("%c=%d\n",a,count);
				c=1;
			}
			count=0;
			a++;
			
	}
	if(c==0)
		printf("No");
	return 0;
}