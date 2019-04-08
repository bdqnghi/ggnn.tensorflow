int main()
{
	int n,a=0,b=0,c=0,d=0,e=0,f=0;
	cin >>n;
	if(n>=100)
		do
	{
		n=n-100;
		a++;
	}while(n>=100);
	if(n>=50)
		do
		{
			n=n-50;
			b++;
		}while(n>=50);
	if(n>=20)
		do
	{
		n=n-20;
		c++;
	}while(n>=20);
	if(n>=10)
		do
	{
		n=n-10;
		d++;
	}while(n>=10);
	if(n>=5)
		do
	{
		n=n-5;
		e++;
	}while(n>=5);
	if(n>=1)
		do
	{
		n=n-1;
		f++;
	}while(n>=1);
	cout <<a<<endl;cout <<b<<endl;cout <<c<<endl;cout <<d<<endl;cout <<e<<endl;cout <<f<<endl;
	return 0;
}