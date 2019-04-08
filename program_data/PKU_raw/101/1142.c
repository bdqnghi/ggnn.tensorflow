int main()
{
	int a=0,b=0,c=0,k=0;
	int c1=0,c2=0,c3=0;
	for(a=1;a<4;a++)
		for(b=1;b<4;b++)
		{
			if(b!=a)
				for(c=1;c<4;c++)
				{
					if(c!=a&&c!=b)
					{
						c1=(b>a)+(a==c);
						c2=(a>b)+(a>c);
						c3=(c>b)+(b>a);
						if(a+c1==3&&b+c2==3&&c+c3==3)
						{
							for(k=1;k<4;k++)
							{
								if(a==k)
									cout <<"A";
								if(b==k)
									cout <<"B";
								if(c==k)
									cout <<"C";
							}
							cout <<endl;
							break;
						}
					}
				}
		}
	return 0;
}
