void f(int n1,int n2)
{
	int a[100],b[100],i,j,k,l,m,n,p,q,term=0;
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n2;j++)
	{
		scanf("%d",&b[j]);
	}
	for(k=0;k<n1;k++)
	{
		for(m=k+1;m<n1;m++)
		{
			if(a[m]<a[k])
			{
				term=a[k];
				a[k]=a[m];
				a[m]=term;
			}
		}
	}
	for(n=0;n<n2;n++)
	{
		for(l=n+1;l<n2;l++)
		{
			if(b[l]<b[n])
			{
				term=b[n];
				b[n]=b[l];
				b[l]=term;
			}
		}
	}
	for(p=0;p<n1;p++)
	{
		printf("%d ",a[p]);
	}
	for(q=0;q<n2-1;q++)
	{
		printf("%d ",b[q]);
	}
	printf("%d",b[n2-1]);
}
int main()
{
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	f(n1,n2);
	return 0;
}


