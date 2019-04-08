int main()
{int n,i,j;
double a[100][2],z;
double max=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	for(j=0;j<2;j++)
		scanf("%lf",&a[i][j]);
}
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{z=(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][0]-a[j][0])*(a[i][0]-a[j][0]);
	if(z>max)
	max=z;
	}
}
printf("%.4lf",sqrt(max));
return 0;
}