void main()
{
	int i,b,c,n,m;
	char string[100][100000];
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		gets(string[i]);
	for(i=0;i<=n;i++)
	{
	for(b=0;string[i][b]!='\0';b++)
	{
	for(c=0;string[i][c]!='\0';c++)
	{
	if(c!=b)
	{
	if(string[i][c]==string[i][b])
	{
	 m=0;
	break;
	}
	else m=1;
	}
	}
	if(m==1)
	{
	printf("%c\n",string[i][b]);
	break;
	}
	}
	if(m==0)
	printf("no\n");
	}
	
}
