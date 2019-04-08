int main()
{
	int i,n,t;
	double dis=0.0,dis1=0.0;
    double poi[100][2]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&poi[i][0],&poi[i][1]);
	}
	for(i=0;i<n-1;i++)
	{
		for(t=i+1;t<n;t++)
		{
			dis1=pow((poi[i][0]-poi[t][0])*(poi[i][0]-poi[t][0])+(poi[i][1]-poi[t][1])*(poi[i][1]-poi[t][1]),0.5);
			if(dis1>dis)
				dis=dis1;
			else
				continue;
		}
	}
	printf("%.4f\n",dis);
	return 0;
}