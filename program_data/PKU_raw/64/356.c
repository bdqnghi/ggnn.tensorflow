void main()
{
	int i,j,k,b,c,n;
	double s[100][100],max,a[100][3];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf %lf %lf",&a[i][0],&a[i][1],&a[i][2]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			s[i][j]=sqrt(((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2])));
	for(k=0;k<(n*(n-1)/2);k++)
	{
		max=0;
		for(i=0;i<n;i++)
			for(j=i+1;j<n;j++)
			{	
				if(s[i][j]>max)
				{
					max=s[i][j];
					b=i;
					c=j;
				}
			}
		printf("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n",a[b][0],a[b][1],a[b][2],a[c][0],a[c][1],a[c][2],max);
		s[b][c]=0;
	}
}