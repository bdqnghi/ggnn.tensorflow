int main()
{
    int n,i,k,j,l,t,tem;
    int a[500],b[500];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
		scanf("%d",&a[i]);
		scanf(" ");
	}
	for(j=0,i=0;i<n;i++)
	{
		l=a[i]%2;
		if(l!=0&&a[i]!=0)
		{
			b[j]=a[i];
		    j++;
		}
	}
	for(k=0;k<j;k++)
	{
		for(t=0;t<j-k;t++)
		{
			if(b[t]>b[t+1])
			{
				tem=b[t];
				b[t]=b[t+1];
				b[t+1]=tem;
			}
		}
	}
	for(i=1;i<=j;i++)
	{
		printf("%d",b[i]);
		if(i<=j-1)
		printf(",");
	}
}