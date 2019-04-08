int main()
{
	char a[600];
	char b[600][10];
	char s[10];
	int c[600]={0};
	int n,l,i,j,k,m,max;
	scanf("%d\n",&n);
	gets(a);
	l=strlen(a);
	k=0;
	for(j=0;j<n;j++)
		{
			b[0][j]=a[j];
		}
	b[0][n]='\0';
	for(i=1;i<=l-n;i++)
	{
		for(j=0;j<n;j++)
		{
			s[j]=a[i+j];
		}
		s[n]='\0';
		for(m=0;m<=k;m++)
		{
			if(strcmp(s,b[m])==0)
			{
				c[m]++;
				break;
			}
		}
		if(m==k+1)
		{
			k++;
			strcpy(b[k],s);
		}
		
	}
	max=0;
	for(i=0;i<=k;i++)
	{
		if(c[i]>max)
			max=c[i];
	}
	if(max==0)
		printf("NO");
	else
	{
		printf("%d\n",max+1);
		for(i=0;i<=k;i++)
		{
			if(c[i]==max)
			{
				puts(b[i]);
			}
		}
	}
	return 0;
}

		
