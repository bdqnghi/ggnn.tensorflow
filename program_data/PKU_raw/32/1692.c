void main()
{
	char a[20][100];
	char b[20][100];
	int k,l,j,t,p,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		scanf("%s",b[i]);
	}
	for(i=0;i<n;i++)
	{
		t=(int)strlen(a[i]);
		p=(int)strlen(b[i]);
		for(k=t-1,l=p-1;l>=0;k--,l--)
			if(a[i][k]>=b[i][l])
				a[i][k]=a[i][k]-b[i][l];
			else
			{
				a[i][k]=a[i][k]+10-b[i][l];
				a[i][k-1]=a[i][k-1]-1;
			}
		for(j=0;j<(t-p);j++)
			printf("%c",a[i][j]);
		for(j=t-p;j<t;j++)
			printf("%c",a[i][j]+'0');
		printf("\n");
	}
}