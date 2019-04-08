int main()
{
	int a,b,c,x,y,z;
	for(a=0;a<3;a++)
		for(b=0;b<3;b++)
		{
			if(a==b) continue;
			c=3-a-b;
			x=(b>a)+(a==c);
			y=(a>b)+(a>c);
			z=(c>b)+(b>a);
			;
			if((x-y)==(b-a)&&(y-z)==(c-b)&&(x-z)==(c-a))
			{
				for(int i=0;i<3;i++)
				{
					if(a==i) cout<<'A';
					if(b==i) cout<<'B';
					if(c==i) cout<<'C';
				}
			}
		}

	return 0;
}