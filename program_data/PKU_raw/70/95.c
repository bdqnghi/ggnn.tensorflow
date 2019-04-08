
int main()
{
    double temp=0,sum=0;
	double pt[256][2]={0};
	int n=0,i=0,j=0,k=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%lf %lf",&pt[i][0],&pt[i][1]);
	}
	for(j=0;j<n;j++)
	{
		for(k=0;k<n;k++)
		{
			temp=(pt[j][0]-pt[k][0])*(pt[j][0]-pt[k][0])+(pt[j][1]-pt[k][1])*(pt[j][1]-pt[k][1]);
			if (sum<=temp) sum=temp;
		}
	}
    sum=pow(sum,0.5);
	printf("%.4lf",sum);
	return 0;
}