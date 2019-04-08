int main()
{
	char c[100];
	int t,i,j,k,l;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s",c);
		l=strlen(c);
		for(j=0;j<l;j++)
		{
			for(k=0;k<l;k++)
			{
				if(c[k]==c[j]&&k!=j) break;
			}
			if(k==l)
			{
				printf("%c\n",c[j]);
				break;
			}
			if(j==l-1) printf("no\n");
		}
	}
	return 0;
}

