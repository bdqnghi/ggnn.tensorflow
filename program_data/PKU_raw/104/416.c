//**************************************************
//* ????1.cpp                                  *
//* ?  ?????                                 *
//* ?????2010?11?                           *
//* ????????                               *
//**************************************************
int t(int,int);                                               //????t??n????x
int x,y;                                                      //??????x,y
int main()
{	
	int i,j,m,n;
	cin>>x>>y;
	for(i=0;i<100;i++)                                        //?????x??1?????     
	{
		if(x>=pow(2.0,(i-1)*1.0)&&x<pow(2.0,i*1.0))
			break;
	}
	
	for(j=0;j<100;j++)                                   
	{
		if(y>=pow(2.0,(j-1)*1.0)&&y<pow(2.0,j*1.0))           //?????y??1?????
			break;
	}
	int flag=0;                                              //????flag=0
	for(m=1;m<=i;m++)
	{
		for(n=1;n<=j;n++)
		{
			if(t(m,x)==t(n,y))
			{cout<<t(m,x)<<endl;flag=1;break;}               //??x??y??????????????flag??1
		}
		if(flag)              
			break;                                           //??????                               
	}
	
	return 0;	
}

int t(int n,int h)                                           //?????x????n???????x(n)
{
	int f;

	if(n==1)                                                 //???????x(??y)
		f=h;
	else
	f=t(n-1,h)/2;                                            //????
	return f;
}