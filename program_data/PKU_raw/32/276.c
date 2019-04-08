void main()
{
	char a[10][100],b[10][100];
	int i,j,m=0,n,lena[10],lenb[10],a1[10][100]={0},b1[10][100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ 
	    scanf("%s %s",a[i],b[i]);
		printf("\n");
		lena[i]=strlen(a[i]);
		lenb[i]=strlen(b[i]);
		for(j=lena[i]-1;j>=0;j--)
		{
			a1[i][m]=a[i][j]-'0';
			m++;
		}
		m=0;
		for(j=lenb[i]-1;j>=0;j--)
		{
			b1[i][m]=b[i][j]-'0';
			m++;
		}
		m=0;
		for(j=0;j<lena[i];j++)
		{
			a1[i][j]=a1[i][j]-b1[i][j];
			if(a1[i][j]<0)
			{
			    a1[i][j]=a1[i][j]+10;
				a1[i][j+1]=a1[i][j+1]-1;
			}
		}
	
		for(j=lena[i]-1;j>=0;j--)
		{
			printf("%d",a1[i][j]);
		}
		printf("\n");
	}
}
