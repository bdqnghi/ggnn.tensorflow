void main()
{
	char a[100][100],b[100][100];
	int n,l1,l2,j=48,i;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		scanf("%s",a[i]);
		scanf("%s\n",b[i]);
	}
	scanf("%s",a[i]);
	scanf("%s",b[i]);
	for(i=1;i<=n;i++)
	{
		l1=strlen(a[i]);
		l2=strlen(b[i]);
		for(j=0;j<l2;j++)
		{
			a[i][l1-j-1]='0'+a[i][l1-j-1]-b[i][l2-j-1];
			if((a[i][l1-j-1])<'0')
			{
				a[i][l1-j-2]=a[i][l1-j-2]-1;
				a[i][l1-j-1]=a[i][l1-j-1]+10;
			}
		}
		printf("%s\n",a[i]);
	}
}