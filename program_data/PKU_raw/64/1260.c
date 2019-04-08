int row(int a,int n)
{
	int i=n-1;
	while(a>i)
	{
		a-=i;
		i-=1;
	}
	return(n-1-i);
}
int col(int a,int n)
{
	int i=n-1;
	while(a>i)
	{
		a-=i;
		i-=1;
	}return(n-1-i+a);
}
int main()
{
	struct spot
	{int x;
	int y;
	int z;
	}a[11];
	int n,i,j,l=0,c[55],temp,h,g;
	double b[55];
	scanf("%d",&n);
	for(i=0;i<55;i++)
		c[i]=i;
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a[i].x,&a[i].y,&a[i].z);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		b[l]=(double)sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y)+(a[i].z-a[j].z)*(a[i].z-a[j].z));
		l++;
		}
	}
	for(i=0;i<l-1;i++)
	{
		for(j=0;j<l-i-1;j++)
		{
			if(b[c[j]]<b[c[j+1]])
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
	}
	for(i=0;i<n*(n-1)/2;i++)
	{h=col(c[i]+1,n);
	g=row(c[i]+1,n);
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[g].x,a[g].y,a[g].z,a[h].x,a[h].y,a[h].z,b[c[i]]);
	}
		return 0;
}

