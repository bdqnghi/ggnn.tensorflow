void main()
{
	int a[300];
	int n,i,j,max;
	char c[10];
	for(n=0;;n++)
	{
		for(i=0;;i++)
		{
			c[i]=getchar();
			if(c[i]==','||c[i]==10) break;
		}
		a[n]=0;
		for(j=0;j<i;j++) a[n]=10*a[n]+c[j]-'0';
		if(c[i]==10) break;
	}
	max=-1;
	for(i=0;i<=n;i++)
	{
		if(a[i]>max) max=a[i];
	}
	for(i=0;i<=n;i++)
	{
		if(a[i]==max) a[i]=-1;
	}
	max=-1;
	for(i=0;i<=n;i++)
	{
		if(a[i]>max) max=a[i];
	}
	if(max==-1) printf("No\n");
	else printf("%d",max);
}