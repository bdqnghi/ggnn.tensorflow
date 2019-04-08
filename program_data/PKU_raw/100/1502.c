int main()
{
	char a[300];
	int i,time=0,j,n,m=0;
	gets(a);
	for(i=65;i<=90;i++)
	{
		for(j=0;a[j]!='\0';j++)
		{
			n=a[j];
			if(n==i)
				time++;
		}
		if(time>0)
		{
			printf("%c=%d\n",i,time);
			m++;
		}
		time=0;
	}
	for(i=97;i<=122;i++)
	{
		for(j=0;a[j]!='\0';j++)
		{
			n=a[j];
			if(n==i)
				time++;
		}
		if(time>0)
		{
			printf("%c=%d\n",i,time);
			m++;
		}
		time=0;
	}
	if(m==0)
		printf("No\n");
	return 0;
}





