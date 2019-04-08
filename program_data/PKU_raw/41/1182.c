int differ(int a,int b,int c,int d,int e);
int main()
{
	int a,b,c,d,e,f;
	for(a=1;a<=5;a++)
		for(b=1;b<=5;b++)
			for(c=1;c<=5;c++)
				for(d=1;d<=5;d++)
					for(e=4;e<=5;e++)
						if(differ(a,b,c,d,e)*(b-1)!=0)
						{
							f=1;
							if(a<=2)
							{
								if(e!=1)
									f*=0;
							}
							else
							{								
								if(e==1)
									f*=0;
							}
							if(c<=2)
							{								
								if(a!=5)
									f*=0;
							}
							else
							{								
								if(a==5)
									f*=0;
							}
							if(d<=2)
							{								
								if(c==1)
									f*=0;
							}
							else
							{								
								if(c!=1)
									f*=0;
							}
							if(d==1)
								f*=0;
							if(f==1)
								cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
						}
	return 0;
}

int differ(int a,int b,int c,int d,int e)
{
	int p=1;
	p*=(a-b)*(a-c)*(a-d)*(a-e);
	p*=(b-c)*(b-d)*(b-e);
	p*=(c-d)*(c-e);
	p*=d-e;
	if(p==0)
		return 0;
	else
		return 1;
}
