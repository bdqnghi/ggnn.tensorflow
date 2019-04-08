
int  main()
{
	int a,b,c;
	a=0;
	while(a<3)
	{
		b=0;
		while(b<3)
		{
			c=0;
			while(c<3)
			{
				if(((((b>a)+(c==a))==(2-a))+
				(((a>b)+(a>c))==(2-b))+
			    (((c>b)+(b>a))==(2-c)))==3)
				 break;
				c++;
			}
			if(((((b>a)+(c==a))==(2-a))+
							(((a>b)+(a>c))==(2-b))+
						    (((c>b)+(b>a))==(2-c)))==3)
							 break;
			b++;
		}
		if(((((b>a)+(c==a))==(2-a))+
						(((a>b)+(a>c))==(2-b))+
					    (((c>b)+(b>a))==(2-c)))==3)
						 break;
		a++;
	}
	if(((a>=b)+(a>=c))!=2)
	{
		if(((a>=b)+(a>=c))==0)
		{
			if(b>=c)cout<<"A"<<"C"<<"B"<<endl;
			else cout<<"A"<<"B"<<"C"<<endl;
		}
		else
		{
			if(b>=c)cout<<"C"<<"A"<<"B"<<endl;
			else cout<<"B"<<"A"<<"C"<<endl;
		}
	}
	else
	{
		if(b>=c)cout<<"C"<<"B"<<"A"<<endl;
		else cout<<"B"<<"C"<<"A"<<endl;
	}
	return 0;
}