
int mycomp(const void *e1,const void *e2)
{
	int *p1=(int*)e1,*p2=(int*)e2;
	return p1[0]-p2[0];
}

int x[1001],y[1001];

int main()
{
	int n;
	while (scanf("%d",&n),n)
	{
		for (int i=0;i<n;i++)
			scanf("%d",x+i);
		qsort(x,n,sizeof(int),mycomp);
		for (int i=0;i<n;i++)
			scanf("%d",y+i);
		qsort(y,n,sizeof(int),mycomp);
		int ans=0;
		int hx,hy,tx,ty;
		hx=hy=0;
		tx=ty=n-1;
		while (hx<=tx)
		{
			if (x[hx]>y[hy])
			{
				++ans;
				++hx;
				++hy;
				continue;
			}
			if (x[tx]>y[ty])
			{
				++ans;
				--tx;
				--ty;
				continue;
			}
			if (x[hx]<y[ty])
				--ans;
			else
				if (x[hx]>y[ty]) ++ans;
			++hx;
			--ty;
		}
		printf("%d\n",ans*200);
	}
	return 0;
}