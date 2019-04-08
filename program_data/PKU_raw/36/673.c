void main()
{
	char a[21],b[21];
	int r,s,t;
	int m,n,x;
	char a1[300]={0},b1[300]={0};
	scanf("%s%s",a,b);
	m=strlen(a);
	n=strlen(b);
	for(r=0;r<=m-1;r++)
	{
		t=a[r];
		a1[t]++;
	}
	for(s=0;s<=n-1;s++)
	{
		t=b[s];
		b1[t]++;
	}
	for(t=0,x=1;t<=299;t++)
	{
		if(a1[t]!=b1[t]) x=0;
	}
	if(x==1) printf("YES");
	else printf("NO");
}

