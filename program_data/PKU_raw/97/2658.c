int main()
{
	int number,i=0,a=0,b=0,c=0,d=0,e=0,f=0;
	cin>>number;
	for (i=0; ;i++)
	{
		if (number>=100)
		{
			a=number/100;
			number=number-100*a;
		}
		
		if (number<100 && number>=50)
		{
			b=number/50;
			number=number-50*b;
		}
		
		if (number<50 && number>=20)
		{
			c=number/20;
			number=number-20*c;
			
		}
		if (number<20 && number>=10)
		{
			d=number/10;
			number=number-10*d;
		}
		if (number<10 && number>=5)
		{
			e=number/5;
			number=number-5*e;
		}
		if (number<5 && number>0)
		{
			f=number;
			break;
		}
		if (number<=0)
			break;
	}
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	cout<<f<<endl;
	return 0;
}