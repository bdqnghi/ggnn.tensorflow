int main()
{
	int a,b,c,d,e,A,B,C,D,E;
    for(a=1;a<=5;a++)
	{
		for(b=1;b<=5&&b!=a;b++)
		{
			for(c=1;c!=a&&c!=b&&c<=5;c++)
			{
				for(d=1;d<=5&&d!=a&&d!=b&&d!=c;d++)
				{
					for(e=1;e!=2&&e!=3&&e!=a&&e!=b&&e!=c&&e!=d;e++)
					{
						A=(e==1);
						B=1;
						C=(a==5);
                        D=(c!=1);
						E=(d==1);
						cout<<a<<" "<<d<<" "<<e<<" "<<c<<" "<<b;
					}
				}
			}
		}
	}
	cin.get();
	return 0;
}