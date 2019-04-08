int f(int x,int y)
{
	int j,p=1;
	for(j=0;j<y;j++)
		p=p*x;
	return(p);
}
  int main()
{
	char a[100];
	int i,m,n,p[100],t[100],q;
	long int num=0;
	scanf("%d %s %d",&m,a,&n);
	q=strlen(a);
	for(i=0;i<q;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]+'A'-'a';
		if(a[i]>='0'&&a[i]<='9')
			p[i]=a[i]-'0';
		else if(a[i]>='A'&&a[i]<='Z')	
			p[i]=a[i]-'A'+10;
	}
	for(i=q-1;i>=0;i--)
		num=num+p[i]*f(m,q-i-1);	
	for(i=0;num>=n;i++)
	{
		t[i]=num%n;
		num=num/n;
	}
	t[i]=num%n;
	for(;i>=0;i--)
	{
		if(t[i]>=0&&t[i]<=9)
			p[i]=t[i]+'0';
		else if(t[i]>=10&&t[i]<26)	
			p[i]=t[i]+'A'-10;
		printf("%c",p[i]);
	}
	return 0;
}