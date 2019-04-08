int main()
{
	int a[101]={0},k=1,i,n,j,r=0;
	scanf("%d",&n);
	a[0]=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			a[j]=a[j]*2+r;
			if(a[j]>9)
			{
				r=a[j]/10;
				a[j]=a[j]%10;
				if(j+1==k)
					k++;
			}
			else r=0;
		}
	}
	if(r)
		a[k]=r;
	for(i=k-1;i>=0;i--)
		printf("%d",a[i]);
	return 0;
}