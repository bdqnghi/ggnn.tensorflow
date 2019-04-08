int main ()
{
	char a[500],b[250][4];
	char c;
	int n,k,m=0,i,j,l,y,p;
	int d[250];
	for(i=0;i<250;i++)
		d[i]=0;
	scanf("%d%c",&n,&c);
	gets(a);
	k=strlen(a);
	for(i=0;i<=k-n;i++)
	{
		for(j=0;j<n;j++)
			b[m][j]=a[i+j];
		m++;
	}
	for(i=0;i<k-n;i++)
		for(j=i+1;j<=k-n;j++)
		{
			if(b[i][0]!='\0')
			{
				y=0;
			for(l=0;l<n;l++)
				if(b[i][l]!=b[j][l]) y++;
			if(y==0)
			{b[j][0]='\0';d[i]++;}
			}
		}
	p=d[i]+1;
	for(i=0;i<=k-n;i++)
		if(d[i]>p-1) p=d[i]+1;
	if(p==1) printf("NO");
	else
	{
	printf("%d\n",p);
		for(i=0;i<k-n;i++)
	{
		if(d[i]==p-1)
		{
			for(j=0;j<n;j++)
				printf("%c",b[i][j]);
			printf("\n");
		}
	}
	}
}
