int main()
{
	int a,b,c,d,e,t[6];
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			for(c=1;c<=5;c++)
			{
				for(d=1;d<=5;d++)
				{
					for(e=1;e<=5;e++)
					{
						if(e!=2&&e!=3&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e))
						{
							t[a]=(e==1);     //????????????
							t[b]=(b==2);
							t[c]=(a==5);
							t[d]=(c!=1);
							t[e]=(d==1);
							if(t[1]==1&&t[2]==1&&t[3]!=1&&t[4]!=1&&t[5]!=1)//????????????
								printf("%d %d %d %d %d",a,b,c,d,e);
							else continue;
						}	
					}
				}
			}
		}
	}
	return 0;
}
