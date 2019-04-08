int main()
{
	int n,w;
	int a[1000];
	int b[1000];
	int c[1000];
	int d[2000];
	int f[1000];
for(int i=0;i<2000;i++)
{
	int s=0;
	int e=0;
	scanf("%d",&n);
		if(n==0)
		{
			w=i;
			break;
		}
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		for(int k=0;k<n;k++)
		{
			scanf("%d",&b[k]);
		}
		for(int j=0;j<n;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				int t,u;
				if(a[j]>a[k])
				{
					t=a[j];
					a[j]=a[k];
					a[k]=t;
				}
				if(b[j]<b[k])
				{
					u=b[j];
					b[j]=b[k];
					b[k]=u;
				}
			}
		}
		for(int l=0;l<n;l++)
			c[l]=0;
				for(int l=0;l<n;l++)
			f[l]=0;
		for(int l=0;l<n;l++)
		{
			int m=0;
			for(m=0;m<n;m++)
			{
				if((a[l]>b[m])&&(c[m]==0))
				{
					s++;
					f[l]=1;
					c[m]=1;
					break;
				}
			}
			if(f[l]==0)
			{
				int p;
				for(p=m-1;p>=0;p--)
				{
					if(c[p]==0)
						break;
				}
				if(a[l]==b[p])
				{
					int r=0,t=0;
					for(r=0;r<n;r++)
					{
						if(c[r]==0)
							break;
					}
					for(t=n-1;t>=0;t--)
					{
						if(f[t]==0)
							break;
					}
					if(a[t]>b[r])
					{
						f[t]=1;
						c[r]=1;
						s++;
						l--;
						continue;
					}
					
				}
				for(int k=0;k<n;k++)
				{
					if(c[k]==0)
					{
						c[k]=1;
						f[l]=1;
						if(a[l]<b[k])
						e++;
						break;
					}
				}

			}
		}
	d[i]=(s-e)*200;
}
for(int i=0;i<w;i++)
	printf("%d\n",d[i]);
return 0;
}

