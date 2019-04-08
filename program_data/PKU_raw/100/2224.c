int main()
{
	char c[1000];
	gets(c);
	int n[1000];
	int r,q;
	int m=65;
	int p=97;
	int num=0;
	r=strlen(c);
	int a=65;
	do
	{
		n[a]=0;
		int i=0;
		do
		{
			if(c[i]==a)
			{n[a]++;i++;}
			else
			{i++;}
		}while(i<=(r-1));
		a++;
	}while(a<=90);
	int b=97;
	do
	{
		int i=0;
		n[b]=0;
		do
		{
			if(c[i]==b)
			{n[b]++;i++;}
			else
			{i++;}
		}while(i<=(r-1));
		b++;
	}while(b<=122);
	do
	{
		if(n[m]!=0)
	     {num=num+1;printf("%c=%d\n",m,n[m]);}
		m++;
	}while(m<=90);
	do
	{
		if(n[p]!=0)

	     {num=num+1;printf("%c=%d\n",p,n[p]);
		}
		p++;
	}while(p<=122);
	if(num==0)
	{printf("No\n");}
	scanf("%d",&q);
	return 0;
}