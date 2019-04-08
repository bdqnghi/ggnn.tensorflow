void main()
{	char str[11],substr[4],max;
	while(	scanf("%s%s",str,substr)!=EOF)
	{

	int i,t,m;
	m=strlen(str);
	max=str[0];
	t=0;
	for(i=0;i<=m-2;i++)
	{
		if(str[i+1]>max)
		{
			max=str[i+1];
		t=i+1;
		}
       
	}
	for(i=0;i<=t;i++)
	{
		printf("%c",str[i]);
	}
	printf("%s",substr);
	for(i=t+1;i<=m-2;i++)
	{
	 printf("%c",str[i]);
	}
	printf("%c\n",str[m-1]);
	}
}
