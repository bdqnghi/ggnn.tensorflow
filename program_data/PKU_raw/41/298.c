int main()
{
	int a,b,c,d,e,c1,c2,c3,c4,c5;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			if(a==b) continue;
			for(c=1;c<=5;c++)
			{
				if(c==b||c==a) continue;
				for(d=1;d<=5;d++)
				{
					if(d==c||d==b||d==a) continue;
                    for(e=1;e<=5;e++)
					{
						if(e==2||e==3||e==a||e==b||e==c||e==d) continue;
						else
						{
							c1=(e==1);c2=(b==2);c3=(a==5);c4=(c!=1);c5=(d==1);
							if(c1+c2+c3+c4+c5==2)
							{
							if(c1+c2==2&&a+b==3)
								cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							else if(c1+c3==2&&a+c==3)
								cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							else if(c1+c4==2&&a+d==3)
								cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							else if(c1+c5==2&&a+e==3)
								cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							else if(c2+c3==2&&b+c==3)
								cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							else if(c2+c4==2&&b+d==3)
								cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							else if(c2+c5==2&&b+e==3)
								cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							else if(c3+c4==2&&c+d==3)
								cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							else if(c3+c5==2&&c+e==3)
								cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							else if(c4+c5==2&&d+e==3)
								cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							}
						}
						}
					}
				}
			}
		}
						return 0;
					}