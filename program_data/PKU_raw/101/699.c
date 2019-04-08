int main()
{
	int a,b,c,A,B,C,i;
	for(a=3;a>=1;a--)
	{
		for(b=3;b>=1;b--)
		{
			if(a!=b)
			{
				for(c=3;c>=1;c--)
				{
					if(a!=c&&b!=c)
					{
						A=(b>a)+(c==a);
						B=(a>b)+(a>c);
						C=(c>b)+(b>a);
						if(a+A==3&&b+B==3&&c+C==3)
						{
							for(i=1;i<=3;i++)
							{
								if(a==i)
									cout<<"A";
								if(b==i)
									cout<<"B";
								if(c==i)
									cout<<"C";
							}
						}
					}
				}
			}
		}
	}
	return 0;
}