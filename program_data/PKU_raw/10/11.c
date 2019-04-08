int a[25],num[25]={0};
int main()
{
	int k=0,i,n;
	int search(int i,int n);
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=n-1;i>=0;i--)
	{
		num[i]=1+search(i,n);
	}
	for(i=0;i<n;i++)
	{
  		if(k<num[i])  k=num[i];
	}
	printf("%d",k);
	return 0;
}
int search(int i,int n)
{
	int p,q=0;
	for(p=i+1;p<n;p++)
	{
		if(a[p]<=a[i])
		{
			if(q<num[p])
               q=num[p];
		}
	}
	return q;
}



