void main()
{
	int n,i,j,La,Lb,k=0;
	char a[100],b[100],c[50][100]={'\0'};
	scanf("%d\n",&n);
	for (i=1;i<=n;i++)
	{
		gets(a);
		gets(b);
		La=strlen(a);
		Lb=strlen(b);
		for (j=Lb-1;j>=0;j--)
		{
			a[j+La-Lb]=a[j+La-Lb]-b[j]+48;
			if (a[j+La-Lb]<48)
			{
				a[j+La-Lb]+=10;
				a[j+La-Lb-1]-=1;
			}
		}
		getchar();
		strcpy(c[k++],a);
	}
	for (j=0;j<=n-1;j++) puts(c[j]);
}