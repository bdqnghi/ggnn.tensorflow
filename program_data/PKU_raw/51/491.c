int main()
{
	int n,i,j,o[500],ji,max=0;
	char a[502],b[6],cmp[6],c[500][6];
	scanf("%d",&n);
	b[n]='\0';
	cmp[n]='\0';
	getchar();
	gets(a);
	int len;
	len=strlen(a);
	ji=0;
	for(i=0;i<len-n+1;i++)
	{
		o[ji]=0;
		for(j=0;j<n;j++)
		{
			c[ji][j]=a[i+j];
		}
		c[ji][n]='\0';
		for(j=0;j<len-n+1;j++)
		{
			int k;
			for(k=0;k<n;k++)
			{
				cmp[k]=a[j+k];
			}
			if(strcmp(cmp,c[ji]))
			{}
			else
			{
				o[ji]++;
			}
		}
		if(o[ji]>max)
			max=o[ji];
		for(j=0;j<ji;j++)
		{
			if(strcmp(c[j],c[ji]))
			{}
			else
			{
				ji--;break;
			}
		}
		ji++;
	}
	j=0;
	if(max!=1)
	{
		printf("%d\n",max);
		for(i=0;i<ji;i++)
		{
			if(o[i]==max)
				puts(c[i]);
		}
	}
	else
	{
		printf("NO");
	}
	return 0;
}
