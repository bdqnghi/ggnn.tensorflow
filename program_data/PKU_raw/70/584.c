
int main()
{
	struct
	{double x,y;
	}a[10000];
	double l,max=0;
	int i,j,n;
	
	scanf ("%d",&n);
	
	for (i=1;i<=n;i++)
		scanf ("%lf%lf",&a[i].x,&a[i].y);

	for (i=1;i<n;i++)
		for (j=i+1;j<=n;j++)
			{
				l= (a[i].x - a[j].x ) * (a[i].x - a[j].x ) + (a[i].y - a[j].y ) * (a[i].y - a[j].y );
				if (l>max) max=l;
			}
		max= sqrt(max);
		printf ("%.4lf",max);
	return 0;
}

