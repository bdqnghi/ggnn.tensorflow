int main()
{
	int num,m,n;
	n=0;
	char c;
	scanf("%d%c",&m,&c);
	if(c!=',')
		printf("No");
	
	else
	{
	while(c==',')
	{
		scanf("%d%c",&num,&c);
		if (num>m)
		{
		     n=m;
			 m=num;
		 
		}
		else if(n<num&&num<m)
		{
			n=num;
		}
	}
	if (n==0)
		printf("No");
	else if(m!=n)
		printf("%d",n);
	else
		printf("No");
	}
	return 0;
}


		

	