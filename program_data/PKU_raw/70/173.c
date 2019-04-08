
void main()
{
	int n;
	scanf("%d",&n);

	struct
	{
		double x,y;
	}s[10];

	int j,i;
	double max,distance[100];
	max = 0.0;
	for(j=0;j<n;j++)
	{
		float a,b;
		scanf("%f %f",&a,&b);
		s[j].x = a;
		s[j].y = b;
	}

	for(i=n-1;i>0;i--)
	{
		for(j=0;j<n-1;j++)
		{
			distance[j]=sqrt((s[j].x-s[i].x)*(s[j].x-s[i].x)+(s[j].y-s[i].y)*(s[j].y-s[i].y));
            if(distance[j]>max)
				max = distance[j];
		}
	}
    printf("%.4f\n",max);
}