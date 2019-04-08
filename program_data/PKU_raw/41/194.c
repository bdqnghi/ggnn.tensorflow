int main()
{
	int a,b,c,d,e;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			if(b==a)
			{
				continue;
			}
			else
			{
				for(c=1;c<=5;c++)
				{
					if((c==a)||(c==b))
					{
						continue;
					}
					else
					{
						for(d=1;d<=5;d++)
						{
							if((d==a)||(d==b)||(d==c))
							{
								continue;
							}
							else
							{
								for(e=1;e<=5;e++)
								{
									if((e==a)||(e==b)||(e==c)||(e==d))
									{
										continue;
									}
									if(e==2||e==3||d!=3)
									{
										continue;
									}
									if(((a==1||a==2)&&e==1)||(a!=1&&a!=2&&e!=1))
									{
										if(((b==1||b==2)&&(b==2))||(b!=1&&b!=2&&b!=2))
										{
											if(((c==1||c==2)&&a==5)||(c!=1&&c!=2&&a!=5))
											{
												if(((d==1||d==2)&&c!=1)||(d!=1&&d!=2&&c==1))
												{
													if(((e==1||e==2)&&d==1)||(e!=1&&e!=2&&e!=1))
													{
														cout<<a<<' ';
								                     	cout<<b<<' '; 
									                    cout<<c<<' '; 
								                     	cout<<d<<' ';
								                    	cout<<e<<endl;
													}
												}
											}
										}
									}
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