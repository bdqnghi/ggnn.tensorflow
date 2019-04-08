void main()
{
	int n,i,m;
	scanf("%d",&n);
char a[100][101],b[100][101];

	scanf("%s",a[0]);
	scanf("%s",b[0]);
for(i=1;i<n;i++)
{	
	printf("\n");
	scanf("%s",a[i]);
	scanf("%s",b[i]);
}
for(i=0;i<n;i++)
	{
	int c[101],j,l1,l2;
	char d[101];
		l1=strlen(a[i]);
		l2=strlen(b[i]);
		for(m=0;m<(l1-l2);m++)
			d[m]='0';
		for(m=1;m<=l2;m++)
			d[l1-m]=b[i][l2-m];
		for(j=1;j<=l1;j++)
		{
			
			if(a[i][l1-j]>=d[l1-j])
				c[j]=a[i][l1-j]-d[l1-j];
			else
			{
				c[j]=(10+a[i][l1-j])-d[l1-j];
				a[i][l1-j-1]=a[i][l1-j-1]-1;
			}
		}

		for(j=l1;j>=1;j--)
			printf("%d",c[j]);
			printf("\n");
		
	}
}