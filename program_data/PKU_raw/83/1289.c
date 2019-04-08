void main()
{
	int n,i,j,k,l;
	float GPA,m=0,p=0,a[3][9],b[9];
	scanf("%d\n",&n);
	for(i=0;i<=1;i++)
		for(j=0;j<=n-1;j++)
		{
			scanf("%f ",&a[i][j]);
	
		}
		for(j=0;j<=n-1;j++)
		{
			if(a[1][j]>=90)a[2][j]=4.0;
			else if(a[1][j]>=85)a[2][j]=3.7;
			else if(a[1][j]>=82)a[2][j]=3.3;
			else if(a[1][j]>=78)a[2][j]=3.0;
			else if(a[1][j]>=75)a[2][j]=2.7;
			else if(a[1][j]>=72)a[2][j]=2.3;
			else if(a[1][j]>=68)a[2][j]=2.0;
			else if(a[1][j]>=64)a[2][j]=1.5;
			else if(a[1][j]>=60)a[2][j]=1.0;
			else a[2][j]=0;
			
		}
		for(j=0;j<=n-1;j++)
		{
			b[j]=a[0][j]*a[2][j];
		m=m+b[j];
			p=p+a[0][j];
		}
		GPA=m/p;
		printf("%.2f\n",GPA);
}
