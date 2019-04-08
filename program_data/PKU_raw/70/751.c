void main()
{
	int i,j,k;
	int n;
	double dot[100][2];
	double distf=0;
	double ld=0;
	double dist=0;
	double x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<2;j++)
			scanf("%lf",&dot[i][j]);
		for(i=0;i<n-1;i++)
			for(k=i+1;k<n;k++)
			{
				x=dot[i][0]-dot[k][0];
				y=dot[i][1]-dot[k][1];
				distf=x*x+y*y;
				dist=sqrt(distf);
				if(dist>ld)
				ld=dist;
			}
		printf("%.4f\n",ld);
}
 
 
 
