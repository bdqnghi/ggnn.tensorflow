int main()
{
	int n,i,j,d=1,t,x[12],y[12],z[12];
	float g;
	struct juli
	{
		int a;
		int b;
		float jl;
	}l[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			l[d].jl=sqrt(((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]))*1.0);
			l[d].a=i;
			l[d].b=j;
			d++;
		}
	}
	d--;
    for(i=1;i<=d-1;i++)
	{
		for(j=1;j<=d-i;j++)
		{
			if (l[j].jl<l[j+1].jl)
			{
				g=l[j].jl;
				l[j].jl=l[j+1].jl;
				l[j+1].jl=g;
				t=l[j].a;
				l[j].a=l[j+1].a;
				l[j+1].a=t;
				t=l[j].b;
				l[j].b=l[j+1].b;
				l[j+1].b=t;
			}
		}
	}
	for(i=1;i<=d;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[l[i].a],y[l[i].a],z[l[i].a],x[l[i].b],y[l[i].b],z[l[i].b],l[i].jl);
    }
	return 0;
}