
double distance(double a1,double a2,double b1,double b2)
{
	double c;
	c=sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2));
	return(c);
	
}

void main()
{
	int n,i,j;
	double A[100][2],x,y;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&A[i][0]);
		scanf("%lf",&A[i][1]);

	}
	

	x=distance(A[0][0],A[0][1],A[1][0],A[1][1]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			y=distance(A[i][0],A[i][1],A[j][0],A[j][1]);
			if(y>x)
				x=y;

		}
	}
	printf("%.4lf\n",x);


}
