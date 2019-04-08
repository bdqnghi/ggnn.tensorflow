int main(int argc, char* argv[])
{
	int n,i,j,m,d=1;
	double a[99][2];
	double max=0,x;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf ("%lf",&x);
			a[i][j] = x;
		}
	}
		for (i=0;i<(n-1);i++)
		{
			for (m=d;m<n;m++)
			{
				if (((a[i][0]-a[m][0])*(a[i][0]-a[m][0])+(a[i][1]-a[m][1])*(a[i][1]-a[m][1]))>max)
					max=(a[i][0]-a[m][0])*(a[i][0]-a[m][0])+(a[i][1]-a[m][1])*(a[i][1]-a[m][1]);				
			}
			d++;
		}
		printf ("%.4lf\n",sqrt(max));
	return 0;
}
