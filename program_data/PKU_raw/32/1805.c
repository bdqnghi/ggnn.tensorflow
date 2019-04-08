void main()
{
	int i=0,j=0,d=0,n=0,m=0,s=0,lena[100]={0},lenb[100]={0},c[100][100]={0};
	char a[100][100]={0},b[100][100]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s\n%s",a[i],b[i]);
		lena[i]=strlen(a[i]);
		lenb[i]=strlen(b[i]);
		for(j=lena[i]-1,s=lenb[i]-1;s>=0;j--,s--)
		{
			if(a[i][j]>=b[i][s])
				c[i][j]=a[i][j]-b[i][s];
			else
			{	
				c[i][j]=a[i][j]+10-b[i][s];
			for(m=j-1;;m--)
			{
			if(a[i][m]!='0')	
			{
				a[i][m]--;break;}
			else
				a[i][m]='9';
			}
			}
		}
		for(m=lena[i]-lenb[i]-1;m>=0;m--)
				c[i][m]=a[i][m];
		for(j=0;j<lena[i];j++)
		{
			if(c[i][j]>=10)c[i][j]=c[i][j]-48;
		}
		for(j=0;j<lena[i];j++)
			if(c[i][j]!=0)break;
		for(j=j;j<lena[i];j++)
			printf("%d",c[i][j]);
		printf("\n");
	}
}
		




