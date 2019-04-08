int main()
{
	int n;
	scanf("%d",&n);
	int a[100000],b[100000],c[100000],d[100000];
	memset(c,0,sizeof(c));
	memset(d,0,sizeof(d));
	int i;
	for(i=0;;i++)
	{
		scanf("%d %d\n",&a[i],&b[i]);
		if((a[i]==0)&&(b[i]==0))
			break;
		c[a[i]]=1;
		d[b[i]]++;
	}
	for(i=0;i<n;i++)
	{
		if((c[i]==0)&&(d[i]==n-1))
			printf("%d\n",i);
	}
}


