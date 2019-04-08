int main()
{
	int a,b,c,d,e,t;
	for (a=1;a<=5;a++)
	{
		for (b=1;b<=5;b++)
		{
			for  (c=1;c<=5;c++)
			{
				for (d=1;d<=5;d++)
				{
					for (e=1;e<=5;e++)
					{
						if((e!=2) && (e!=3))
						{
							t=0;
							if ((a<=2 && e==1)||(a>=3&&e!=1))
								t++;
							if (b!=1)
								t++;
							if ((c<=2 && a==5) || (c>=3 && a!=5))
								t++;
							if ((d<=2 && c!=1)||(d>=3&&c==1))
								t++;
							if (e!=1 && d!=1)
								t++;
							if ((t==5)&&(a+b+c+d+e==15)&&(a*b*c*d*e==120))
							{
								cout <<a<<" " <<b<<" "<<c<<" "<<d<<" "<<e<<endl;
								break;
							}
						}
					}
				}
			}
		}
	}
	cin.get();
	return 0;
}