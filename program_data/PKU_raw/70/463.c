int main(int argc, char* argv[])
{
	struct point
	{double x,y;}p[100];
	
	int i,j,n;
	double maxd =0.0, d;
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%lf%lf",&p[i].x, &p[i].y);
	for (i=0; i<n; i++){
		for (j=i+1; j<n; j++){
			d = sqrt((p[j].x - p[i].x)*(p[j].x - p[i].x)+ 
				(p[j].y - p[i].y)*(p[j].y - p[i].y));
			if (d > maxd)
				maxd = d;
		}
	}
	printf ("%.4lf\n",maxd);

	return 0;
}
