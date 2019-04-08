void main()
{
	char a[1000],b[1000],c[1000]={0},d[1000]={0};
	int m,n,i,j,t;
	scanf("%s %s",a,b);
	m=strlen(a);
	n=strlen(b);
    for(i=0;i<=m-1;i++)
		for(j=i;j<=m-1;j++)
			if(a[j]<a[i])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
    for(i=0;i<=n-1;i++)
		for(j=i;j<=n-1;j++)
			if(b[j]<b[i])
			{
				t=b[j];
				b[j]=b[i];
				b[i]=t;
			}//??ASICC?????????
	if(m!=n) printf("NO");
	else 
	{
		for(i=0,t=0;i<=m-1;i++)
			if(a[i]!=b[i])
				t++;
			if(t==0) printf("YES");
				else printf("NO");
	}
}
//???????????????????????????????????????


