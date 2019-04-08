void main()
{
	int n,i,j,a[100],c[100],m=0,e[100],k=0,x;
	char b[100][10],d[100][10],f[100][10],y[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",b[i],&a[i]);
		if(a[i]>=60)
		{
			c[m]=a[i];
			strcpy(d[m],b[i]);
			m++;
		}
		else 
		{
			e[k]=a[i];
			strcpy(f[k],b[i]);
			k++;
		}
	}
	for(j=0;j<m-1;j++)
		for(i=0;i<m-j-1;i++)
			if(c[i]<c[i+1])
			{
				x=c[i];
				c[i]=c[i+1];
				c[i+1]=x;
				strcpy(y,d[i]);
				strcpy(d[i],d[i+1]);
				strcpy(d[i+1],y);
			}
	for(i=0;i<m;i++)
		printf("%s\n",d[i]);
	for(i=0;i<k;i++)
		printf("%s\n",f[i]);
}