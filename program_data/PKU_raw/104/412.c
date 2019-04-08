//**************************************************
//* ????1.cpp                                  *
//* ?  ?????                                 *
//* ?????2010?11?                           *
//* ????????                               *
//**************************************************
int t(int,int);
int x,y;
int main()
{	
	int i,j,m,n;
	cin>>x>>y;
	for(i=0;i<100;i++)
	{
		if(x>=pow(2.0,(i-1)*1.0)&&x<pow(2.0,i*1.0))
			break;
	}
	
	for(j=0;j<100;j++)
	{
		if(y>=pow(2.0,(j-1)*1.0)&&y<pow(2.0,j*1.0))
			break;
	}
	for(m=1;m<=i;m++)
	{
		for(n=1;n<=j;n++)
		{
			if(t(m,x)==t(n,y))
			break;
		}
		if(t(m,x)==t(n,y))
			break;
	}
	cout<<t(m,x)<<endl;
	
	return 0;	
}

int t(int n,int h)
{
	int f;

	if(n==1)
		f=h;
	else
	f=t(n-1,h)/2;
	return f;
}