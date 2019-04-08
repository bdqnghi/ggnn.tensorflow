int main()
{
	int a,b,c,n;
	
	for(a=0;a<3;a++)
		for(b=0;b<3;b++)
			for(c=0;c<3;c++)
			{
				n=0;
				if(a==2-(b>a)-(c==a))
					n=n+1;
				if(b==2-(a>b)-(a>c))
					n=n+1;
				if(c==2-(c>b)-(b>a))
					n=n+1;
				if(a!=b&&a!=c&&b!=c)
					n=n+1;
				if(n==4)
				{
					if(a==0)
					{
						cout<<"A";
						if(b<c)
							cout<<"BC";
						else
							cout<<"CB";
					}
					if(b==0)
					{
						cout<<"B";
						if(a<c)
							cout<<"AC";
						else
							cout<<"CA";
					}
					if(c==0)
					{
						cout<<"C";
						if(a<b)
							cout<<"AB";
						else
							cout<<"BA";
					}
				}
			}
	return 0;
}
