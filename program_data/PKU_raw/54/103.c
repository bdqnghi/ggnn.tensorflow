void main()
{	int i,j,n,k,a[100];
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++) a[i]=0;
	for(i=1; ;i++)
	{	a[1]=i*n+k;
		for(j=1;j<=n;j++)
			if(a[j]%(n-1)==0) a[j+1]=a[j]/(n-1)*n+k;
			else break;
		if(a[n]!=0) {printf("%d",a[n]);break;}
	}
}

