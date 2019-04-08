
int main()
{
	int a,b,c,d,e;
	int x[6];
	for(e=1;e<=5;e++)
	{
		if(e==2||e==3) continue;
		else
		{
			for(a=1;a<=5;a++)
			{
				if(e==a) continue;
				else
				{
					for(b=1;b<=5;b++)
					{
						if(e==b||a==b) continue;
						else
						{
							for(c=1;c<=5;c++)
							{
								if(e==c||a==c||b==c)continue;
								else
								{
									d=15-a-b-c-e;
									x[a]=(e==1);
									x[b]=(b==2);
									x[c]=(a==5);
									x[d]=(c!=1);
									x[e]=(d==1);
									if(x[1]+x[2]==2&&x[3]+x[4]+x[5]==0)
										cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
