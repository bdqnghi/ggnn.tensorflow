int main(int argc, char* argv[])
{
	int n;
	int i,j,k=0;
	double distance[1000];
	scanf ("%d",&n);
	struct vertex
	{
		double x;
		double y;
	};
	struct vertex v[100];
	for (i=0;i<n;i++)
	{
		scanf ("%lf",&v[i].x);
		scanf ("%lf",&v[i].y);
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<=i;j++)
		{
			distance[k]=sqrt((v[i].x-v[j].x)*(v[i].x-v[j].x)+(v[i].y-v[j].y)*(v[i].y-v[j].y));//?????
			k++;
		}
	}
	double max=distance[0];
	for (j=(n*(n-1))/2-1;j>0;j--)
	{
		if (distance[j]>max)
		{
			max=distance[j];
		}
	}
	printf("%.4lf",max);
	return 0;
}

