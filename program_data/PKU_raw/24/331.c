void main()
{
	char st[1000],s[50][50];
	int i,j,k[50],p,q,max,min,l;
	gets(st);
	l=strlen(st);
	j=0; 
	for (i=0;i<50;i++)
		k[i]=0;
	for (i=0;i<l;i++)
	{
		if (st[i]!=' ')
		{
			s[j][k[j]]=st[i];
			k[j]=k[j]+1;
		}
		else
			j=j+1;
	}
	max=0; min=50;
	for (i=0;i<=j;i++)
	{
		if (k[i]<min) 
		{
			min=k[i];
			q=i;
		}
		if (k[i]>max)
		{
			max=k[i];
			p=i;
		}
	}
	for (i=0;i<max;i++)
		printf("%c",s[p][i]);
	printf("\n");
	for (i=0;i<min;i++)
		printf("%c",s[q][i]);
	printf("\n");
}