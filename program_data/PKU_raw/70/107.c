
int main(int argc, char* argv[])
{
	struct point{
		double x,y;
		
	}point[20];
	int n,i,j;
	double d[20][20];
	double max=0.0,distance;
	scanf("%d\n",&n);
	for(i=0;i<=n-1;i++)
		scanf("%lf %lf\n",&point[i].x,&point[i].y);
	for(j=0;j<=n-1;j++)
	{
		for(i=j+1;i<=n-1;i++)
		{	
			
			d[j][i]=(point[i].x-point[j].x)*(point[i].x-point[j].x)+(point[i].y-point[j].y)*(point[i].y-point[j].y);
			if(d[j][i]>max)
				max=d[j][i];
		}
	}
	distance=sqrt(max);
	printf("%.4f\n",distance);
	return 0;
}

