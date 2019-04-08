void main()
{
	long a,b,k,h,n,i,m;
	char s[100],t[100];
	scanf("%d%s%d",&a,&s,&b);
	n=strlen(s);
	for(k=0,i=0;i<n;i++)
	{
		if(s[i]<='Z'&&s[i]>='A')
			s[i]=s[i]-55;
		else if(s[i]<='z'&&s[i]>='a')
			s[i]=s[i]-87;
		else 
			s[i]=s[i]-48;
		for(h=1,m=(int)s[i];h<=n-i-1;h++)
			m=m*a;
		k=k+m;
	}

	h=0;
	if(k!=0)
	{
		while (k!=0)
	{
		t[h]=k%b;
		h++;
		k=k/b;
	}
	for(i=h-1;i>=0;i--)
	{
		if(t[i]<10)
			t[i]=t[i]+48;
		else
			t[i]=t[i]+55;
		printf("%c",t[i]);	
	}
	
	}
	else 
		printf("0");
	printf("\n");

}
