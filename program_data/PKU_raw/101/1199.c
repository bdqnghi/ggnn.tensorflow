int main()
{
	int a,b,c;
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			if(a==b)
				continue;
			for(c=0;c<3;c++)
			{
				if((c==a)||(c==b))
					continue;
				int pa=0,pb=0,pc=0;
				if(	b>a)
					pa++;
				if(a==c)
					pa++;
				if(	a>b)
					pb++;
				if(	a>c)
					pb++;
				if(	c>b)
					pc++;
				if(	b>a)
					pc++;
				if((a==2-pa)&&(b==2-pb)&&(c==2-pc))
				{
					for(int j=0;j<3;j++)
					{
						if(a==j)
							cout<<"A";
						if(b==j)
							cout<<"B";
						if(c==j)
							cout<<"C";
					}
				}
			}
		}
	}
	return 0;
}