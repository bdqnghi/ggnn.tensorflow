int main()
{
int n;
int a=0;
int b=0;
cin>>n;
for (int i=1;i<=n;i++)
{
	int m;
	cin>>m;
	if(m>=a)
	{
		b=a;
		a=m;
	}
	else if(m>b)
		b=m;
}
printf("%d\n%d\n",a,b);
return 0;
}