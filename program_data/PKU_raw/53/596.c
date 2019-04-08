void main()
{
	int n,i,j,k,m,a[100],b[100],p[100],q=0;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(j=0;j<=n-1;j++)
	{
		for(k=0;k<=j-1;k++)
		{
			if(a[j]==b[k]) a[j]=-1;
			else continue;
		}
		if(a[j]!=-1)
		{	
			p[q]=j;
			q++;
		}
	}
	for(m=0;m<=n-1;m++)
	{
	    if(a[m]!=-1&&m!=p[q-1]) printf("%d,",a[m]);
		if(a[m]!=-1&&m==p[q-1]) printf("%d\n",a[m]);
		if(a[m]==-1) continue;
	}
}