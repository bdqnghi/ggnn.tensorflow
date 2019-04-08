main()
{
	int a,b;
	char n[100];
	scanf("%d",&a);
	scanf("%s",n);
	scanf("%d",&b);
	long c=0,x;

	int i,j,k,l=strlen(n);
	for(i=0;i<l;i++)
	{
		if(n[i]>='A'&&n[i]<='Z')
			x=n[i]-'A'+10;
		else if(n[i]>='a'&&n[i]<='z')
			x=n[i]-'a'+10;
		else
			x=n[i]-'0';
		for(j=1;j<=l-i-1;j++)
			x=a*x;
		c+=x;
	}
	int m[100]={-1};
	for(j=0;;j++)
	{
		m[j]=c%b;
		c=c/b;
		if(c==0)
			break;
	}
	for(k=j;k>=0;k--)
	{
		if(m[k]>=10)
		{
			char y;
			y='A'+m[k]-10;
			printf("%c",y);
		}
		else
		     printf("%d",m[k]);
	}
	


}