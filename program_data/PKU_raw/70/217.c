
int  main()
{
	int a,i,j;
	double dis[100];
	int num=0;
	scanf("%d",&a);
	struct{
		double x;
		double y;	 
	} 
	point[10];
	for(i=0;i<a;i++)
	{
		double m,n;
		scanf("%lf%lf",&m,&n);
		point[i].x=m;
		point[i].y=n;
	}
	for(i=0;i<a-1;i++)
	{
		for(j=a-1;j>i;j--)
		{
	   dis[num]=sqrt((point[i].x -point[j].x)*(point[i].x -point[j].x) +(point[i].y-point[j].y)*(point[i].y-point[j].y));
	    num++;
		}
	}	 
	for(i=0;i<num;i++)
	{  
		double t;
		if(dis[i]>dis[i+1])
		{
		t= dis[i+1];
		dis[i+1]=dis[i];
		dis[i]=t;
		}
		else;
	}
		printf("%.4lf",dis[num]);
    return 0;	
}