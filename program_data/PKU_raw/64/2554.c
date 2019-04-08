float juli(float x1,float y1,float z1,float x2,float y2,float z2)
{
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
}
int main()
{
	int n,u=0;
	int i,j,t;
	float x[10],y[10],z[10],d[50],m;
	int a[50],b[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f %f %f",&x[i],&y[i],&z[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{ 
			d[u]=juli(x[i],y[i],z[i],x[j],y[j],z[j]);
			a[u]=i;
			b[u]=j;
			u++;
		}
	}
	for(i=0;i<u;i++)
	{
		for(j=u-1;j>i;j--)
		{
			if(d[j]>d[j-1])
			{
				m=d[j];
				d[j]=d[j-1];
				d[j-1]=m;
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
				t=b[j];
				b[j]=b[j-1];
				b[j-1]=t;
			}
		}
	}
	for(i=0;i<u;i++)
	{
		printf("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f\n",x[a[i]],y[a[i]],z[a[i]],x[b[i]],y[b[i]],z[b[i]],d[i]);
	}
	return 0;
}
