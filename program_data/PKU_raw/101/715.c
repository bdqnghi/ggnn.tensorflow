int main()
{
	int adet(int a,int b,int c);
	int bdet(int a,int b,int c);
	int cdet(int a,int b,int c);
	int A=0,B=0,C=0;
	int a=0,b=0,c=0;
	int af=0,bf=0,cf=0;
	int num1[6]={10,10,5,5,1,1};
	int num2[6]={5,1,10,1,10,5};
	int num3[6]={1,5,1,10,5,10};
	int i=0;

	for (i=0;i<6;i++)
	{
		A=num1[i];
		B=num2[i];
		C=num3[i];

	if (A>B&&A>C)
		{af=0;
		if (B>C){bf=1 ;cf=2;}
		else {bf=2;cf=1;}
		}
	else if (A>B&&A<C)
	{
		af=1;bf=2;cf=0;
	}
	else if (A>C&&A<B)
	{
		af=1;bf=0;cf=2;
	}
	else if (A<B&&A<C)
	{
		af=2;
		if (B>C){bf=0 ;cf=1;}
		else {bf=1;cf=0;}
	}

	a=adet(A,B,C);
	b=bdet(A,B,C);
	c=cdet(A,B,C);

	if (af==a&&bf==b&&cf==c)
	{
		switch(i)
		{
		case 0:
			cout<<"CBA"<<endl;
			break;
		case 1:
			cout<<"BCA"<<endl;
			break;
		case 2:
			cout<<"CAB"<<endl;
			break;
		case 3:
			cout<<"BAC"<<endl;
			break;
		case 4:
			cout<<"ACB"<<endl;
			break;
		case 5:cout<<"ABC"<<endl;
		    break;
		}

	}
	}
	return 0;

}
int adet(int a,int b,int c)
{
	int x=0;
	if (b>a)x=x+1;
	if (c==a)x=x+1;
	return (x);

}
int bdet(int a,int b,int c)
{
	int x=0;
	if (a>b)x=x+1;
	if (c<a)x=x+1;
	return (x);
}
int cdet(int a,int b,int c)
{
	int x=0;
	if (c>b)x=x+1;
	if (b>a)x=x+1;
	return (x);
}
