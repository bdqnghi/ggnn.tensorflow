int main()
{
	int n,i,j;
	float farest;
	float a[100][2],d[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%f%f",&a[i][0],&a[i][1]);}
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
	{d[i][j]=(a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]);};}
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
	{if(d[i][j]>d[i][j+1])
	d[i][j+1]=d[i][j];};}
	for(i=0;i<n;i++)
	{if(d[i][n-1]>d[i+1][n-1])
	d[i+1][n-1]=d[i][n-1];}

	farest=sqrt(d[n-1][n-1]);
	printf("%.4f\n",farest);
	return 0;
}