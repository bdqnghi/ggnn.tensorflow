int main()
{
	int n;
	int i,j,k=0;
	struct point
	{
		int x;
		int y;
		int z;
	}p[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&p[i].x,&p[i].y,&p[i].z);
	}
	struct distant
	{
		struct point p1,p2;
		double r;
	}d[45],t;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++,k++)
		{
			d[k].p1=p[i];
			d[k].p2=p[j];
			d[k].r=sqrt(1.0*((d[k].p1.x-d[k].p2.x)*(d[k].p1.x-d[k].p2.x)+(d[k].p1.y-d[k].p2.y)*(d[k].p1.y-d[k].p2.y)+(d[k].p1.z-d[k].p2.z)*(d[k].p1.z-d[k].p2.z)));
	        if(k>n*(n-1)/2)
			    break;		
		}
		if(k>n*(n-1)/2)
			break;
	}

    for(i=k-1;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(d[j].r<d[j+1].r)
			{
                t=d[j];
				d[j]=d[j+1];
				d[j+1]=t;
			}
		
        }
        
    }
	 for(i=0;i<k;i++)
	 {
		 printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",d[i].p1.x,d[i].p1.y,d[i].p1.z,d[i].p2.x,d[i].p2.y,d[i].p2.z,d[i].r);
	 }
	 return 0;
}

	
