int main()
{
	int n,i,j,max=0,t=0,k=0,min,e,f;
	scanf("%d",&n);
    struct point
	{
	    int x,y;
	}p[N];
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&p[i].x,&p[i].y);
	}
	min=p[0].x;
	for(j=1;j<=n;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(p[i].x>p[i+1].x)
			{
				e=p[i].x;
                p[i].x=p[i+1].x;
				p[i+1].x=e;
				f=p[i].y;
				p[i].y=p[i+1].y;
				p[i+1].y=f;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(p[i].y>max)
		{
			max=p[i].y;
		}
		if(p[i].x<min)
		{
			min=p[i].x;
		}
	}
	for(i=1;i<n;i++)
	{
		t=0;
		for(j=0;j<n-1;j++)
		{
			if(p[i].x>p[j].y){t=t+1;}
		}
		if(t==i){k=k+1;}
	}
	if(k>=1){printf("no");}
	else {printf("%d %d",min,max);}
	return 0;
}
