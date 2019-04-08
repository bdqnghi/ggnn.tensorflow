void main()
{
	int i,j,n,t,a[100]={0},f[100]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	t=0;
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
			if(a[i]>=a[j]) f[i]=(f[i]>f[j])? f[i]:f[j];
	    f[i]++;
		t=(f[i]>t)? f[i]:t;
	}
	printf("%d\n",t);
}