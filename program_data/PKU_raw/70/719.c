void main()
{
	int n,i,j,k;
	double a[100][2],dis[5000],max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<2;j++)
			scanf("%lf",&a[i][j]);
		k=0;
		for(i=0;i<n;i++)
			for(j=i+1;j<n;j++)
				dis[k++]=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
			max=dis[0];
			for(i=1;i<=k;i++)
				if(dis[i]>max)
					max=dis[i];
				printf("%.4lf\n",max);
}


