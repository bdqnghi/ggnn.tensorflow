int D(int*h,int i,int n)
{
	int j,z=1,x;
	if(i<n)
	{
		for(j=i+1;j<n+1;j++)
		{
			if(h[j-1]<=h[i-1])
			{
				x=D(h,j,n)+1;
				if(z<x)z=x;
			}
		}
	}
	return z;
}
int main()
{
	int i,n,z=1,h[25],x;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",h+i);
	for(i=0;i<n;i++)
	{
		x=D(h,i+1,n);
		if(z<x)z=x;
	}
	printf("%d",z);
	return 0;
}