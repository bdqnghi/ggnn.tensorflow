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
			num=m*num+a[i]+10-'a';
		else if(a[i]>='0'&&a[i]<='9')
			num=m*num+a[i]-'0';
		else if(a[i]>='A'&&a[i]<='Z')	
			num=m*num+a[i]-'A'+10;
	}	
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
