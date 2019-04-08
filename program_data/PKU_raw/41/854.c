int main()
{
	int a,b,c,d,e,k;
	for (a=1;a<=5;a++)
	{
		for (b=1;b<=5;b++)
		{
			if (a==b) continue;
			for (c=1;c<=5;c++)
			{
				if (a==c||b==c) continue;
				for (d=1;d<=5;d++)
				{
					if (a==d||b==d||c==d) continue;
					for (e=1;e<=5;e++)
					{
						if (a==e||b==e||c==e||d==e||e==2||e==3) continue;
						else
						{
							k=0;
							if (a==1||a==2) 
							{
								if (e==1) k=k+1;
							}
							else
							{
								if (e!=1) k=k+1;
							}
							if (b==1||b==2) 
							{
								if (b==2) k=k+1;
							}
							else
							{
								if (b!=2) k=k+1;
							}
							if (c==1||c==2) 
							{
								if (a==5) k=k+1;
							}
							else
							{
								if (a!=5) k=k+1;
							}
							if (d==1||d==2) 
							{
								if (c!=1) k=k+1;
							}
							else
							{
								if (c==1) k=k+1;
							}
							if (e==1||e==2) 
							{
								if (d==1) k=k+1;
							}
							else
							{
								if (d!=1) k=k+1;
							}
							if (k==5) 
								cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
						}
					}
				}
			}
		}
	}
	return 0;
}