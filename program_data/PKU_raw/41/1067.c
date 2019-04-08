


int g[100],r[10];

int main()
{
    int a,b,c,d,e;
	for(a=1;a<6;a++)
	{
		for(b=1;b<6;b++)
			{
				if(b==a)
				continue;
				for(c=1;c<6;c++)
				{
					if(c==a||c==b)
						continue;
					for(d=1;d<6;d++)
					{
						if (d==a||d==b||d==c)
							continue;
						for(e=4;e<6;e++)
							{
								if(e==a||e==b||e==c||e==d)
									{continue;}
								for(int i=1;i<6;i++)
									{g[i]=0;}
								for(int i=1;i<6;i++)
									{r[i]=0;}
								if (e==1) g[1]=1;else g[1]=0;
								if (b==2) g[2]=1;else g[2]=0;
								if (a==5) g[3]=1;else g[3]=0;
								if (c!=1) g[4]=1;else g[4]=0;
								if (d==1) g[5]=1;else g[5]=0;
								r[1]=a;r[2]=b;r[3]=c;r[4]=d;r[5]=e;
								if (g[1]+g[2]+g[3]+g[4]+g[5]==2)
								{
									for(int i=1;i<6;i++)
									{
										if (r[i]==2&&g[i]==1)
										{
											for(int j=1;j<6;j++)
											{
												if(r[j]==1&&g[j]==1)
													cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
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