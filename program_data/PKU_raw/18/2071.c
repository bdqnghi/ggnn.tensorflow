
void minus (int a[100][100], int n)
{
	int i,j;
	for(i=j=0;i<n;i++)
	{
		int m=10000;
		for(j=0;j<n;j++)
			m=(m<a[i][j])?m:a[i][j];
		for(j=0;j<n;j++) a[i][j]-=m;
	}
	for(i=j=0;i<n;i++)
	{
		int m=10000;
		for(j=0;j<n;j++)
			m=(m<a[j][i])?m:a[j][i];
		for(j=0;j<n;j++) a[j][i]-=m;
	}
}

void pr(int a[100][100],int k)
{
    int i,j;
    for (i=0; i<k; i++)
    {
        for (j=0; j<k; j++)
        {
            printf("%d%c",a[i][j],(j+1==k)?'\n':',');
        }
    }
}

void lower(int a[100][100],int n)
{
	int i,j;
	for(i=j=0;i<n;i++)
		for(j=0;j<n;j++)
			if(i==0&&j==0) a[i][j]=a[i][j];
			else if(i==0&&j>0) a[i][j]=a[i][j+1];
			else if(i>0&&j==0) a[i][j]=a[i+1][j];
			else if(i>0&&j>0)  a[i][j]=a[i+1][j+1];
}

void fff(int n)
{
	int a[100][100]={0};
	int i=0,j,sum;

	for(i=j=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
   for(i=0,sum=0;i<n;i++)
   {
		minus(a,n-i);
		sum+=a[1][1];
		lower(a,n-i);
   }
   printf("%d\n",sum);
}

void main()
{
	int i=0,n;
	scanf("%d",&n);
	while(i++<n)
		fff(n);
}