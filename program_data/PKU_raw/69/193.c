int main()
{
	int d[1000]={0};
	int b[1000]={0};
	int q[1000]={0};
	int a1,c1,num;
	char c[1000];
	char a[1000];
	gets(c);
	gets(a);
	a1=strlen(a);
	c1=strlen(c);
	int i=0;
	do
	{b[i]=c[c1-1-i]-48;
	i++;}while(i<c1);
	i=0;
	do
	{d[i]=a[a1-1-i]-48;
	i++;}while(i<a1);
	i=0;num=0;
	do
	{
		q[i]=(d[i]+b[i]+num)%10;
		if(q[i]==b[i]+d[i]+num)
		{num=0;}
		else
		{num=1;}
		i++;
	}while(i<=999);
	i=999;
	do
	{
		if(q[i]!=0)
		{break;}
		i--;
	}while(i>=1);
	i=i;
	do
	{
		printf("%d",q[i]);
		i--;
	}while(i>=0);
	return 0;
}
