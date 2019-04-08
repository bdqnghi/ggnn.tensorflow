void main()
{
	char c[101],d[101];
	int a,b,i,j,p,x;
	long n=0;
	scanf("%d %s %d",&a,c,&b);
	for(i=0;i<=100;i++)
	{
	if(c[i]==0)break;
	else if(c[i]<='Z'&&c[i]>='A')c[i]=c[i]-'A'+10;
	else if(c[i]<='z'&&c[i]>='a')c[i]=c[i]-'a'+10;
	else if(c[i]<='9'&&c[i]>='0')c[i]=c[i]-'0';
	}x=i;
	for(i=0;i<=x-1;i++)
	{
		p=1;
		for(j=1;j<=x-i-1;j++)
		{
			p=p*a;
		}
		n=n+p*c[i];

	}
	i=0;
	while((n/b)!=0)
	{
		i++;
		d[i]=n%b;
		n=n/b;
	}
	d[i+1]=n%b;
	i++;
	for(j=1;j<=i;j++)
	{
		if(d[j]>=10){d[j]=d[j]-10+'A';}
		else d[j]=d[j]+'0';
	}
	for(j=i;j>=1;j--)
	{
		 printf("%c",d[j]);
	}

}