int main()
{
	int ca, cb, cc, cd, ce, a, b, c, d, e;
	for (a=1;a<=5;a++)
	{
		for (b=1;b<=5;b++)
		{
		     for (c=1;c<=5;c++)
			 {	
				    for (d=1;d<=5;d++)
					{
				        for (e=1;e<=5;e++)
						{
						    ca = (e==1);
							cb = (b==2);
							cc = (a==5);
							cd = (c!=1);
							ce = (d==1);
							if ((ca+cb+cc+cd+ce==2)&&(a*b*c*d*e==120)&&(ca*a+cb*b+cc*c+cd*d+ce*e==3)&&((ca*a)<=2)&&((cb*b)<=2)&&((cc*c)<=2)&&((cd*d)<=2)&&((ce*e)<=2)&&(e!=2)&&(e!=3))							
								cout << a << " " << b << " " << c << " " << d << " " << e;
						}
					}						
			 }
		}
	}
	return 0;
}
				