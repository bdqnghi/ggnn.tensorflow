void main()
{
	char a[1000][15]={'\0'};
	int n,i,j;
	for(i=0;i<1000;i++)
	{
		gets(a[i]);
		n=strlen(a[i]);
		if(n==0) break;
	}
	int k=i;
	int max,p;
	for(i=0;i<k;i++)
	{
		max=a[i][0];p=0;
		n=strlen(a[i]);
		for(j=0;j<n-4;j++)
		{if(a[i][j]>max) {max=a[i][j];p=j;}}
		for(j=0;j<=p;j++)
		{printf("%c",a[i][j]);}
		printf("%c%c%c",a[i][n-3],a[i][n-2],a[i][n-1]);
		for(j=p+1;j<n-4;j++)
		{printf("%c",a[i][j]);}
		printf("\n");
	}
}