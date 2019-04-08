
int main()
{
	int n,i,j,u,max=0,max2=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
    for(j=1;j<=n;j++)
		if(max<a[j-1]) max=a[j-1];
		else max=max;
    for(u=1;u<=n;u++)
        if(max2<a[u-1]&&max>a[u-1]) max2=a[u-1];
        else max2=max2;

    printf("%d\n",max);
    printf("%d\n",max2);
	return 0;
}
