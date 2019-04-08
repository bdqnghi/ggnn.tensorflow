char n[101];
int a[101];
int fig=0,l;
void calculate()
{
	int i,j;
	int yu=0;
	for (i=1;i<l;i++)
	{
		fig=fig*10+((int)n[i]-'0');
		a[i]=fig/13;
		fig=fig-13*a[i];
	}
	for (i=1;i<l;i++)
	{
		if (a[i]!=0) 
		{ j=i; break;}
	}
	for (i=j;i<l;i++) 
	{
		cout<<a[i];
	}
	cout<<endl; cout<<fig<<endl;
}
int main()
{
	memset(n,'\0',sizeof(n));
	memset(a,0,sizeof(a));
	cin>>n;
	l=strlen(n);
	fig=((int)n[0]-'0');
	if ((l==2&&(fig*10+(int)n[1]-'0')<13)||(l==1))
	{
		cout<<"0"<<endl<<n<<endl;
	}
	else
	{
		calculate();
	}
	return 0;
}