void main()
{
	struct distance
	{
		float a[2], b[2], c[2];
		float d;
	}dis[55];
	int n, i, j, k=0, r[55], t;
	float x[11], y[11], z[11];
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%f%f%f", &x[i], &y[i], &z[i]);
	for(i=0; i<n-1; i++)
		for(j=i+1; j<n; j++)
		{
			dis[k].d=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);
			dis[k].a[0]=x[i]; dis[k].a[1]=x[j];
			dis[k].b[0]=y[i]; dis[k].b[1]=y[j];
			dis[k].c[0]=z[i]; dis[k].c[1]=z[j];
			r[k]=k;
			k++;
		}
	for(i=0; i<k-1; i++)
		for(j=0; j<k-1-i; j++)
			if(dis[r[j]].d<dis[r[j+1]].d)
			{
				t=r[j];
				r[j]=r[j+1];
				r[j+1]=t;
			}
	for(i=0; i<k; i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", (int)dis[r[i]].a[0], (int)dis[r[i]].b[0], (int)dis[r[i]].c[0], (int)dis[r[i]].a[1], (int)dis[r[i]].b[1], (int)dis[r[i]].c[1], sqrt(dis[r[i]].d));
}