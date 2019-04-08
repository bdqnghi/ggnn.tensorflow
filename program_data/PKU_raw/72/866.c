int main(){
	int k,m,n,i,l,j,x,z,o,p,q,r,s;
	int a[20][20];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&(a[i][j]));
		}
	}
	if((a[0][0]>=a[0][1])&&(a[0][0]>=a[1][0]))
		printf("0 0\n");
	for(i=1;i<n-1;i++)
	{
		if((a[0][i]>=a[0][i-1])&&(a[0][i]>=a[0][i+1])&&(a[0][i]>=a[1][i]))
			printf("0 %d\n",i);
	}
	if((a[0][n-1]>=a[0][n-2])&&(a[0][n-1]>a[1][n-1]))
	{x=n-1;
	printf("0 %d\n",x);}
	for(i=1;i<m-1;i++)
	{
		if((a[i][0]>=a[i-1][0])&&(a[i][0]>=a[i+1][0])&&(a[i][0]>=a[i][1]))
			printf("%d 0\n",i);
		for(j=1;j<n-1;j++)
		{
			if((a[i-1][j]<=a[i][j])&&(a[i+1][j]<=a[i][j])&&(a[i][j-1]<=a[i][j])&&(a[i][j+1]<=a[i][j]))
				printf("%d %d\n",i,j);
		}
	
		if((a[i][n-1]>=a[i-1][n-1])&&(a[i][n-1]>=a[i+1][n-1])&&(a[i][n-1]>=a[i][n-2]))
		{   z=n-1;
			printf("%d %d\n",i,z);
		}
}
	if((a[m-1][0]>=a[m-1][1])&&(a[m-1][0]>a[m-2][0]))
	{
		o=m-1;
		printf("%d 0\n",o);
	}
	for(i=1;i<n-1;i++)
	{
		if((a[m-1][i]>=a[m-1][i-1])&&(a[m-1][i]>=a[m-1][i+1])&&(a[m-1][i]>=a[m-2][i]))
		{
			p=m-1;
			printf("%d %d\n",p,i);
	}
	}
	if((a[m-1][n-1]>=a[m-1][n-2])&&(a[m-1][n-1]>a[m-2][n-1]))
	{q=m-1;
	r=n-1;
	printf("%d %d\n",q,r);}
	return 0;
}

		
	