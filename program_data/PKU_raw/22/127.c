void main()
{
	int a[300]={0},i,j,len,n,m,k,b,max,l[300];
	char c[1505];
	gets(c);
	len=strlen(c);
	for(n=1,i=0;i<len;i++)
	{
		if(c[i]==','){n++;}
	}
	b=0;
	for(i=0;i<n;i++)
	{
		l[i]=0;
		for(j=0;j<4;j++)
		{
			if(c[b+j]!=',' && c[b+j]!=0){l[i]++;}
			else break;
		}
		for(m=1,k=l[i]+b-1;k>=b;k--)
		{
			a[i]+=(c[k]-48) * m;
			m = m * 10;
		}
		b+=l[i]+1;
	}
	for(max=0,i=0;i<n;i++)
	{
		if(a[i]>max){max=a[i];}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==max){a[i]=-2;}
	}
	for(i=0,max=-1;i<n;i++)
	{
		if(a[i]>max){max=a[i];}
	}
	if(max!=-1){printf("%d",max);}
	else printf("No");
}