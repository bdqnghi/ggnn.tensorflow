int main ()
{
	int a[101];
	int b[101];
	int m,n,i,j,k,l,w,x,y,z,c,d;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	for(k=0;k<m-1;k++)
	{
		for(l=0;l<m-1-k;l++)
		{
			if(a[l]>a[l+1])
			{
				c=a[l];
				a[l]=a[l+1];
				a[l+1]=c;
			}
		}
	}
	for(w=0;w<n-1;w++)
	{
		for(x=0;x<n-1-w;x++)
		{
			if(b[x]>b[x+1])
			{
				d=b[x];
				b[x]=b[x+1];
				b[x+1]=d;
			}
		}
	}
	for(y=0;y<m-1;y++)
	{
		printf("%d ",a[y]);
	}
	printf("%d",a[m-1]);
	for(z=0;z<n;z++)
	{
		printf(" %d",b[z]);
	}
	return 0;
}







