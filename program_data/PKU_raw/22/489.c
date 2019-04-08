int main()
{
	int n,a[300],i,w,m,t,k=2;
	scanf("%d",&a[1]);
	for(n=2;scanf(",%d",&a[n]);n++)
	for(i=1;i<n;i++)
	{
		for(m=n;m>i;m--)
		if(a[i]<a[m])
			t=a[i],a[i]=a[m],a[m]=t;
	}
	if(a[1]==a[n-1])
		printf("No\n");
	else
	{
		for(i=1;i<=n;i++)
		{
			w=i+1;
		    if(a[i]==a[w])
				k++;
			else break;
		}
		printf("%d",a[k]);
	}
	return 0;
}
