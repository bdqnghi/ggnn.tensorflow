int main()
{
	struct point{
	float s;int r;};
	struct point a[10]={0,0};
	int n,i;
	float d=0.0,result=0.0,t=0.0;

	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%f",&a[i].s);
		t=t+a[i].s;
	}
	for (i=0;i<n;i++)
		scanf("%d",&a[i].r);
	for (i=0;i<n;i++)
		{
			if (a[i].r>=90) d=4.0;
			if (a[i].r<=89&&a[i].r>=85) d=3.7;
			if (a[i].r<=84&&a[i].r>=82) d=3.3;
			if (a[i].r<=81&&a[i].r>=78) d=3.0;
			if (a[i].r<=77&&a[i].r>=75) d=2.7;
			if (a[i].r<=74&&a[i].r>=72) d=2.3;
			if (a[i].r<=71&&a[i].r>=68) d=2.0;	
			if (a[i].r<=67&&a[i].r>=64) d=1.5;
			if (a[i].r<=63&&a[i].r>=60) d=1.0;
		a[i].s=a[i].s*d;
		d=0;
		}
	for (i=0;i<n;i++)
		result=result+a[i].s;
		result=result/t;
		printf("%.2f",result);
}
