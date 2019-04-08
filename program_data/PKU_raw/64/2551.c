main()
{
    int a[10],b[10],c[10];
	int i,j,k,n,t;
	float w;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
    struct px
	{
	    float d;
		int p,q,r;
		int x,y,z;

	};
	struct px m[45];
	k=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		    m[k].d=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])+(c[i]-c[j])*(c[i]-c[j]));
			m[k].p=a[i];
			m[k].q=b[i];
			m[k].r=c[i];
			m[k].x=a[j];
			m[k].y=b[j];
			m[k++].z=c[j];
		}
	}
	for(i=0;i<n*(n-1)/2-1;i++)
	{
		for(j=0;j<n*(n-1)/2-i;j++)
		{
			if(m[j].d<m[j+1].d)
			{
			    w=m[j].d;
				m[j].d=m[j+1].d;
				m[j+1].d=w;

				t=m[j].p;
				m[j].p=m[j+1].p;
				m[j+1].p=t;

				t=m[j].q;
				m[j].q=m[j+1].q;
				m[j+1].q=t;

				t=m[j].r;
				m[j].r=m[j+1].r;
				m[j+1].r=t;

				t=m[j].x;
				m[j].x=m[j+1].x;
				m[j+1].x=t;

				t=m[j].y;
				m[j].y=m[j+1].y;
				m[j+1].y=t;

				t=m[j].z;
				m[j].z=m[j+1].z;
				m[j+1].z=t;
			}
		}
	}

    for(i=0;i<n*(n-1)/2;i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",m[i].p,m[i].q,m[i].r,m[i].x,m[i].y,m[i].z,m[i].d);
}