//????
int main()
{
	int a,b,c,d,e,k=0;
	for (a=1;a<=5;a++)//???a,b,c,d,e??
	{
		for (b=1;b<=5;b++)
		{
			for (c=1;c<=5;c++)
			{
				for (d=1;d<=5;d++)
				{
					for (e=1;e<=5;e++)
					{
						if (e!=2&&e!=3)//??
						{
							k=0;
							if (a==b||a==c||a==d||a==e||b==c||b==d||b==e||c==d||c==e||d==e)
								continue;
							else
							{
								if (a==1||a==2) 
								{
									if (e==1) 
										k=k+1;
								}
								else
								{
									if (e!=1)
										k=k+1;
								}
								if (b==1||b==2) 
								{
									if (b==2) 
										k=k+1;
								}
								else
								{
									if (b!=2)
										k=k+1;
								}
								if (c==1||c==2)
								{
									if (a==5)
										k=k+1;
								}
								else 
								{
									if (a!=5)
										k=k+1;
								}
								if (d==1||d==2)
								{
									if (c!=1)
										k=k+1;
								}
								else
								{
									if (c==1)
										k=k+1;
								}
								if (e==1||e==2)
								{
									if (d==1)
										k=k+1;
								}
								else
								{
									if (d!=1)
										k=k+1;
								}
								if (k==5)
									cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}