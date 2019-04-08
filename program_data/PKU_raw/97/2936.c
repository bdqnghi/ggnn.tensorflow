int main()
{
	int n,a,b;            //????
	cin>> n;                     //????
	if(n>=100)               //????????100?50,20,10,5
	{
		a=n%100;
		b=(n-a)/100;
		cout<< b <<endl;       //????100,50,20,10,5,1???
		n=a;
	}
	else
	{
		cout<<"0"<<endl;             
	}
	if(n>=50)
	{
		a=n%50;
		b=(n-a)/50;
		cout<< b << endl;      
		n=a;
	}
	else
	{
		cout<<"0"<<endl;
	}
	if(n>=20)
	{
		a=n%20;
		b=(n-a)/20;
		cout<< b <<endl;
		n=a;
	}
	else
	{
		cout<<"0"<<endl;
	}
	if(n>=10)
	{
		a=n%10;
		b=(n-a)/10;
		cout<< b <<endl;
		n=a;
	}
	else
	{
		cout<<"0"<<endl;
	}
	if(n>=5)
	{
		a=n%5;
		b=(n-a)/5;
		cout<<b <<endl;
		n=a;
	}
	else
	{
		cout<<"0"<<endl;
	}
	cout<< n;
	return 0;	

}
