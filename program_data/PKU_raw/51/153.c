int main()
{
	char a[500]={'\0'};
	char b[500][5]={'\0'};
	int c[500]={0};
	char d[500][5]={'\0'};
	int n,i,j,max=0,k,z=-1;
	scanf("%d\n",&n);
	gets(a);
	k=strlen(a);
	for(i=0;i<=k-n;i++)
	{
		for(j=0;j<n;j++)
			b[i][j]=a[i+j];
		b[i][n]='\0';
	}
	for(i=0;i<=k-n;i++)
	{
		if(b[i][0]!=32)
		{
			z++;
			strcpy(d[z],b[i]);
		}
		for(j=k-n;j>=i;j--)
		{
			if(b[j][0]!=32)
			{
				if(strcmp(b[i],b[j])==0)
				{
					c[z]++;
					b[j][0]=32;
				}
			}
		}
		if(max<c[z])max=c[z];
	}
	if(max==1)printf("NO");
	else 
	{
	printf("%d",max);
	for(i=0;i<=z;i++)
	{
		if(c[i]==max)printf("\n%s",d[i]);
	}
	}
}
