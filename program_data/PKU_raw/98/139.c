void main ()
{
	char word[10000][40];
	int i,n,q=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",word[i]);
	}
	for (i=0;i<n;i++)
	{
		if (q!=0)
		{
			q=q+1+strlen(word[i]);
		}
		if (q==0)
		{
			q=q+strlen(word[i]);
		}
		
		if (q-strlen(word[i])==0)
			printf("%s",word[i]);
	    if (q-strlen(word[i])!=0&&q<=80)
			printf(" %s",word[i]);
		if (q>80)
		{
			printf("\n");
			printf("%s",word[i]);
			q=strlen(word[i]);
		}
	}
}