void col(char a[],char b[][5],int m,int n)
{
	int i,j;
	for(i=0;i<=m-n;i++)
		for(j=0;j<n;j++)
			b[i][j]=a[i+j];
}
int main()
{
	char a[500],b[500][5]={0};
	int n,m,i,j,c[500]={0},t=0;
	scanf("%d",&n);
	scanf("%s",a);
	m=strlen(a);
	col(a,b,m,n);
	for(i=0;i<=m-n;i++)
		c[i]=1;
	for(i=0;i<m-n;i++)
	{
		if(c[i])
		{
		for(j=i+1;j<=m-n;j++)
		{
			if(c[j])
			{
				if(!strcmp(b[i],b[j])) {c[i]++;c[j]=0;}
			}
		}
		}
	}
	for(i=0;i<=m-n;i++)
		if(c[i]>t) t=c[i];
	if(t==1) printf("NO");
	else
	{
		printf("%d\n",t);
		for(i=0;i<=m-n;i++)
			if(c[i]==t)
				printf("%s\n",b[i]);
	}
	return 0;
}