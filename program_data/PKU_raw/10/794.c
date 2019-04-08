


int xu(int a[],int n,int k)
{
	int i,b=0;
	for(i=k+1;i<n;i++)
	{
		if(a[k]<a[i])
			b++;
	}
	for(i=0;i<k;i++)
	{
		if(a[k]>a[i])
			b=b+1;
	}
	return(b);
}
int max(int b[],int n)
{
	int i,j,k=1;
	for (i=0;i<n;i++)
	{
		k=1;
		for(j=i;j<n;j++)
		{
			if(b[i] < b[j])
			{
				k = 0;
			}
		}
		if(k==1)
		{
			return i;
		}
	}
}
int maxd(int b[],int n)
{
	int i,j,k=1;
	for (i=0;i<n;i++)
	{
		k=1;
		for(j=i;j<n;j++)
		{
			if(b[i] < b[j])
			{
				k = 0;
			}
		}
		if(k==1)
		{
			return (b[i]);
		}
	}
}
int shai(int a[],int n)
{
	int i,j,m[30]={0};
	
	for(i=0;i<n;i++)
	{
		m[i]=xu(a,n,i);
		//printf("%d,%d\n",i,m[i]);

	}
	if (maxd(m,n)==0)
	{
		return(n);
	}
	else
	{	
		for(j=max(m,n);j<n;j++)
		{
			a[j]=a[j+1];
		}
		shai(a,n-1);
	}
}
int main()
{
	int k=0;
	int a[30]={0};
	int lRet;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d",&a[i]);	
	}
	lRet = shai(a,k);
	printf("%d",lRet);

	return(1);
}