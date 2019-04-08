int main()
{
	int a=0,b=0,c=0,a1=0,b1=0,c1=0;
	for(a=0;a<3;a++)
		for(b=0;b<3;b++)
			for(c=0;c<3;c++)
			{	if((a!=b)&&(a!=c)&&(b!=c))
				{	a1=(b>a)+(c==a);
					b1=(a>b)+(a>c);
					c1=(c>b)+(b>a);
					if(((a+a1)==2)&&((b+b1)==2)&&((c+c1)==2))
					{
						if(a==0)cout<<'A';
						if(b==0)cout<<'B';
						if(c==0)cout<<'C';
						if(a==1)cout<<'A';
						if(b==1)cout<<'B';
						if(c==1)cout<<'C';
						if(a==2)cout<<'A';
						if(b==2)cout<<'B';
						if(c==2)cout<<'C';
					}
				}
			}
		return 0;
}