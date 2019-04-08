main()
{
	long a,b,i,m[100],j=0,p=0,k=0,q[100];
	char n[100],w[100];
	scanf("%d%s%d",&a,n,&b);
	for(i=0;i<=99;i++)
	{
		
	   if('A'<=n[i]&&'Z'>=n[i])m[i]=n[i]-55;
	   else if('a'<=n[i]&&'z'>=n[i])m[i]=n[i]-87;
	   else if('0'<=n[i]&&'9'>=n[i])m[i]=n[i]-48;
	}
	for(i=0;i<=99;i++)
	{if(n[i]!='\0')j++;else break;}
	for(i=0;i<=j-1;i++)
	p=p+m[i]*pow(a,j-i-1);
	for(i=0;i<=99;i++)
	{
		q[i]=p%b;
		if(q[i]>=10)w[i]=q[i]+55;
		else w[i]=q[i]+48;
		p=p/b;
		k++;
		if(p==0)break;
	}
	for(i=1;i<=k;i++)
	printf("%c",w[k-i]);
}

