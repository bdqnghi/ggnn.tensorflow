void main()
{
	int a[8][8],m,n,i,j,t[8],k[8],l,f;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
		t[i]=a[i][0];k[i]=0;
		for(j=0;j<n;j++)
		{	if(a[i][j]>t[i]) {t[i]=a[i][j];k[i]=j;}}
	}

	for(l=0;l<m;l++)
	{
		f=0;
		for(i=0;i<m;i++)
			if(a[i][k[l]]<t[l]){ f=1;break;}
		if(f==0) {printf("%d+%d",l,k[l]); break;}
	}
	if(f==1) printf("No");
}

	