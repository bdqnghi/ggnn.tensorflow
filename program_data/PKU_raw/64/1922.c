double juli(int a,int b,int c,int d,int e,int f)
{
	double t;
	t=sqrt((a-d)*(a-d)+(b-e)*(b-e)+(c-f)*(c-f));
	return t;
}
int main()
{
	int a[11],b[11],c[11],e[50],f[50],temp1;
	double d[50],temp;
	int n,i,j,t=0;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
	}
	for(j=0;j<=n-2;j++)
	{
		for(i=j;i<=n-2;i++)
		{
			d[t]=juli(a[j],b[j],c[j],a[i+1],b[i+1],c[i+1]);
			e[t]=j;
			f[t]=i+1;
			t++;
		}
	}
	for(i=0;i<=n*(n-1)/2-2;i++)
	{
		for(j=0;j<=n*(n-1)/2-2-i;j++)
		{
			if(d[j]<d[j+1])
			{
				temp=d[j];
				d[j]=d[j+1];
				d[j+1]=temp;
				temp1=e[j];
				e[j]=e[j+1];
				e[j+1]=temp1;
				temp1=f[j];
				f[j]=f[j+1];
				f[j+1]=temp1;
			}
		}
	}
	for(i=0;i<=n*(n-1)/2-1;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",a[e[i]],b[e[i]],c[e[i]],a[f[i]],b[f[i]],c[f[i]],d[i]);
	}
	return 0;
}
