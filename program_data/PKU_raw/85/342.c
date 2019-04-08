int range(char x[])
{
	int i,len;
	len=strlen(x);
	for(i=0;i<len;i++)
		if(x[i]<48||x[i]>57&&x[i]<65||x[i]>90&&x[i]<95||x[i]>95&&x[i]<97||x[i]>122)
			return(0);
	return(1);
}
int first(char x[])
{
	if(x[0]>=48&&x[0]<=57)
		return(0);
	else return(1);
}
main()
{
	int n,i;
	char x[21];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",x);
		if(range(x)==1&&first(x)==1)
			printf("yes\n");
		else printf("no\n");
	}
}
