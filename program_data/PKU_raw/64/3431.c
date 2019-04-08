int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	double sz[100],e;
	struct q{
		int x,y,z;
	}a[100],b[100],c[100],m;
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[i].x,&a[i].y,&a[i].z);
	}
	int l=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		  {
              sz[l]=sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y)+(a[i].z-a[j].z)*(a[i].z-a[j].z));
                b[l]=a[i];
			    c[l]=a[j];
				l++;
		}
	}
	for(k=1;k<=l;k++)
	{
		for(i=0;i<l-k;i++)
		{
		   if(sz[i]<sz[i+1])
		   {
		    	e=sz[i];
		    	sz[i]=sz[i+1];
			    sz[i+1]=e;
		    	m=b[i];
		    	b[i]=b[i+1];
		    	b[i+1]=m;
		    	m=c[i];
		    	c[i]=c[i+1];
		    	c[i+1]=m;
		   }
		}
	}
	for(i=0;i<l;i++)
	{
    	printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",b[i].x,b[i].y,b[i].z,c[i].x,c[i].y,c[i].z,sz[i]);
	}
	return 0;
}

