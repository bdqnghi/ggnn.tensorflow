

int main ()
{
	int a,b,c,d,e,x[6]={0},y[6]={0},i,j;

	for (a=1;a<=5;a++)
	{
		for (b=1;b<=5;b++)
		{
			if (a==b) continue ;
			for (c=1;c<=5;c++)
			{
				if (c==a||c==b) continue ;
				for (d=1;d<=5;d++)
				{
					if (d==a||d==b||d==c) continue ;
					for (e=1;e<=5;e++)
					{
						if (e==a||e==b||e==c||e==d) continue ;
						x[1]=a;
						x[2]=b;
						x[3]=c;
						x[4]=d;
						x[5]=e;
						y[1]=(e==1);
						y[2]=(b==2);
						y[3]=(a==5);
						y[4]=(c!=1);
						y[5]=(d==1);
						for (i=1;i<=5;i++)
						{
							for (j=i+1;j<=5;j++)
							{;
								if (y[i]+y[j]==2&&x[i]+x[j]==3)
								{
									if (y[1]+y[2]+y[3]+y[4]+y[5]==2&&x[5]!=2&&x[5]!=3)
									{
									     cout <<x[1]<<" "<<x[2]<<" "<<x[3]<<" "<<x[4]<<" "<<x[5]<<endl;
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



