void main()
{
	int  k=0,n,i,j,l,m;
	char a[100][20]={0},max,e[100][20]={0};
	while(1)
	{
		char b[10]={0},c[20]={0},d[3]={0},p;
		gets(a[k]);
		if(a[k][0]==0)
			break;
		n=strlen(a[k]);
		m=n-4;
		max=a[k][0];
        for(i=1;i<=n-5;i++)
			if(a[k][i]>max)
			{
				max=a[k][i];
			    p=i;
			}
		for(j=p+1,l=0;j<=m-1;j++,l++)
           b[l]=a[k][j];
		for(i=0;i<=p;i++)
           c[i]=a[k][i];
		for(i=0,j=m+1;j<=n-1;i++,j++)
		   d[i]=a[k][j];
		strcat(c,d);
		strcat(c,b);
		strcpy(e[k],c);
		k++;
	}
	for(i=0;i<=k-1;i++)
		puts(e[i]);
}
