int main()
{
	int a=0,b=0,c=0,d=0,e=0,sum=0,i=0,j=0,k=0,p=0;
	int y[6];
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			if(b!=a)
			{
				for(c=1;c<=5;c++)
				{
					if(c!=a&&c!=b)
					{
						for(d=1;d<=5;d++)
						{
							if(d!=a&&d!=b&&d!=c)
							{
								for(e=1;e<=5;e++)
								{
									if(e!=a&&e!=b&&e!=c&&e!=d)
									{
										sum=0;
										y[a]=(e==1);y[b]=(b==2);y[c]=(a==5);y[d]=(c!=1);y[e]=(d==1);
										if(y[a]+y[b]+y[c]+y[d]+y[e]==2&&e!=2&&e!=3)
										{
										    for(i=1;i<=5;i++)
											{
												if(y[i]==1)
												sum=sum+i;
											}
											if(sum==3)
											{
											   cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
											}
												break;
											
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
