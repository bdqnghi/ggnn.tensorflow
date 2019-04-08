int main()
{
	int n,t=0,q=0,i,k;
	double m[40],w[40],e;
	struct point
	{
		char x[20];
		double y;
	} a[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i].x);
		scanf("%lf",&a[i].y);
	}
	for(i=0;i<n;i++)
	{
		if(strlen(a[i].x)==4)
		{
			m[t]=a[i].y;
			t++;
		}
		if(strlen(a[i].x)==6)
		{
			w[q]=a[i].y;
			q++;
		}
	}
	for(i=0;i<t;i++)
	{
		for(k=0;k<t-i-1;k++)
		{
			if(m[k]>m[k+1])
			{
				e=m[k];
				m[k]=m[k+1];
				m[k+1]=e;
			}
		}
	}
for(i=0;i<q;i++)
	{
		for(k=0;k<q-i-1;k++)
		{
			if(w[k]<w[k+1])
			{
				e=w[k];
				w[k]=w[k+1];
				w[k+1]=e;
			}
		}
	}
for(i=0;i<t;i++)
{
	printf("%.2lf ",m[i]);
}
for(i=0;i<q-1;i++)
{
	printf("%.2lf ",w[i]);
}
printf("%.2lf",w[q-1]);
		
	return 0;

}