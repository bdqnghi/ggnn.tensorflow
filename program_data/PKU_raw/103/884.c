int ss(char a[1001],int n)
{
	int b,i=0,c;
	char d;
	b=a[n];
	c=a[n];
	while(a[n]!='\0'&&(b==c||(b-32)==c||b==(c-32)))
	{
		i++;
		n++;
		c=a[n];
	}
	if(b>=97)
	{
		d=b-32;
		cout<<"("<<d<<","<<i<<")";
	}
	else
	{
		d=b;
		cout<<"("<<d<<","<<i<<")";
	}
	return i;
}
int main()
{
	char a[1001];
	int b,i=0,m=0,o;
	cin>>a;
	while(a[m]!='\0')
	{
		m++;
	}
	while(i<m)
	{
		o=ss(a,i);
		i=i+o;
	}
	
	return 0;
}