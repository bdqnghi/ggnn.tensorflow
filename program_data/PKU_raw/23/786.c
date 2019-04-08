void main()
{
	char c[100][100];
	int i=0,t;
	while(scanf("%s",c[i])!=EOF)
    {
		c[i];
	    i++;
	}
	t=i-1;
	for(i=t;i>=0;i--)
		if(i!=0)
		printf("%s ",c[i]);
		else printf("%s",c[0]);
}
