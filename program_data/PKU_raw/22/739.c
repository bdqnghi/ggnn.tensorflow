int main()
{
	int a[300];
	int m,n=0,i;
    scanf("%d",&a[0]);
	m=a[0];
	for(i=1;i<=299;i++)
	{
		if(scanf(",%d",&a[i])==NULL) break;
		if(a[i]>m)
		{
			n=m;
			m=a[i];
		}
		else if(a[i]<m&&n<a[i])
			n=a[i];
	}
	if(n==0)printf("No\n");
	else printf("%d\n",n);
		return 0;
}
