int main()
{
    int a,b,c,d,e,i,j,k,l,m,panduan ;
	for (i=1;i<=5;i++)
	{
		a=i;
		for (j=1;j<=5;j++)
		{
			b=j;
			for (k=1;k<=5;k++)
			{
				c=k;
				for (l=1;l<=5;l++)
				{
					d=l;
					for (m=1;m<=5;m++)
					{
						e=m;
						panduan=0;
						if ((a-b!=0)&&(a-c!=0)&&(a-d!=0)&&(a-e!=0)&&(b-c!=0)&&(b-d!=0)&&(b-e!=0)&&(c-d!=0)&&(c-e!=0)&&(d-e!=0))
						{
							if ((e!=2)&&(e!=3))
							{
								if ((e==1)+(b==2)+(a==5)+(c!=1)+(d==1)==2)
								{
									if (a==2&&e==1) panduan=panduan+1;
									if (b==2) panduan=panduan+1;
									if ((c==1||c==2)&&(a==5)) panduan=panduan+1;
									if ((d==1||d==2)&&(c!=1)) panduan=panduan+1;							
									if (panduan==2)
									{
									cout << a << " " << b << " " << c << " " << d << " " << e  << endl ; 
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