void main()
{
	int n,i;
	char a[100][100];
	char b[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%s",a[i],b[i]);
	int p,q,j,k;
	for(i=0;i<n;i++)
	{
		p=strlen(a[i]);q=strlen(b[i]);
		for(j=q-1,k=p-1;j>=0;j--,k--)
		{
			if(a[i][k]>=b[i][j]) a[i][k]=a[i][k]-b[i][j]+48;
			else if(a[i][k]<b[i][j]) {a[i][k]=a[i][k]-b[i][j]+58;a[i][k-1]=a[i][k-1]-1;}
		}
		for(k=0;k<p;k++)
		{if(a[i][k]!=0) {printf("%c",a[i][k]);j=k;break;}}
		for(k=j+1;k<p;k++) printf("%c",a[i][k]);
		printf("\n");
	}
}