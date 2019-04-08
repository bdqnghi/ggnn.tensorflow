main()
{	char a[15][10],b[15][3],c[10][13],s;
	int i,j,t,r,m=0;
	while (scanf("%s%s",a[m],b[m])!=EOF)m++;
	for(j=0;j<m;j++)
	{	t=strlen(a[j]);
		for(i=0,s=a[j][0];i<t;i++)
			if(a[j][i]>s) s=a[j][i];
		for(r=0;a[j][r]!=s;)r++;
		for(i=0;i<=r;i++)
			c[j][i]=a[j][i];
		for(i=0;i<3;i++)
			c[j][i+r+1]=b[j][i];
		for(i=r+1;i<t+3;i++)
			c[j][i+3]=a[j][i];
		for(i=0;i<t+3;i++)
			printf("%c",c[j][i]);
		printf("\n");
	}
}