void main()
{
	//freopen("D:/input.txt","r",stdin);
	//freopen("D:/output.txt","w",stdout);
	int n,i,m;
    char a[14],b[4];
	char a1[14];
	char t;
	while (scanf("%s%s",a,b)!=EOF)
	{
		n=strlen(a);
		m=0;
		t=a[0];
		for(i=1;i<=n-1;i++)
			if(a[i]>t)
			{
				m=i;
				t=a[i];
			}
		for(i=m+1;i<=n-1;i++)
			a1[i+3]=a[i];
		a[m+1]=b[0];
		a[m+2]=b[1];
		a[m+3]=b[2];
		for(i=m+4;i<=n+2;i++)
			a[i]=a1[i];
		a[n+3]=0;
		printf("%s\n",a);
	}
}