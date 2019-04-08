void s(char c[],char d[])
{
	int max=0,n,y,z;
	for(n=0;n<10;n++)
	{
		if(c[n]>max)
		{
			max=c[n];
			y=n;
		}
		if(c[n]=='\0')
		{
			z=n;
			break;
		}
	}
	for(n=z-1;n>y;n--)
		c[n+3]=c[n];
	c[y+1]=d[0];
	c[y+2]=d[1];
	c[y+3]=d[2];
}
void main()
{
	char a[20]={'\0'},b[4]={'\0'};
	int i;
	while(scanf("%s %s",a,b)!=EOF)
	{
		s(a,b);
		printf("%s\n",a);
		for(i=0;i<20;i++)
			a[i]='\0';
		for(i=0;i<4;i++)
			b[i]='\0';
	}
}