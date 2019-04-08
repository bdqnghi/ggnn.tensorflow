int main()
{
	int a ,b ,c ,d ,e , count;
	count=0;
	for (a=1;a<=5;a++)
	{
		for (b=1;b<=5;b++)
		{
	
		     for (c=1;c<=5;c++)
			{
					
			     for (d=1;d<=5;d++)
				 {
					 
					for(e=1;e<=5;e++)
					{
						if (a!=b && a!=c && a!=d && a!=e && b!=c && b!=d && b!=e && c!=d && c!=e && d!=e && e!=2 && e!=3)
						{
							if (a==1||a==2)
							{
								if(e==1)
								   count++;
							}
							else
							{
								if(e!=1)
									count++;
							}
							if (b==1||b==2)
							{
								if(b==2)
									count++;
							}
							else 
							{
								if(b!=2)
									count++;
							}
							if (c==1||c==2)
							{
								if(a==5)
									count++;
							}
							else 
							{
								if(a!=5)
									count ++;
							}
							if (d==1||d==2)
							{
								if(c!=1)
									count++;
							}
							else 
							{
								if(c==1)
									count++;
							}
							if (e==1)
							{
								if(d==1)
									count++;
							}
							else 
							{
								if(d!=1)
									count++;
							}
							if (count==5)
								cout << a << ' '<< b << ' ' << c<<' '<<d<<' '<<e<<endl;
							count=0;
						}
					}
				 }
			 }
		}
	}


	return 0;

}