int main()
{
int n,a,b;
double i;
cin>>n;
if(n<10)
cout<<n;
else if(n>=10&&n<100)
{
	for(i=1;i<=2;i++)
{
	a=n%(int)pow(10,i);
	b=a/(pow(10,i-1));
	n-=a;
	cout<<b;
}
}

else
{
	for(i=1;i<=3;i++)
{
	a=n%(int)pow(10,i);
	b=a/(pow(10,i-1));
	n-=a;
	cout<<b;
}
a=n%(int)pow(10,i);
	b=a/(pow(10,i-1));
	n-=a;
	if(b!=0)
		cout<<b;
}
return 0;
}