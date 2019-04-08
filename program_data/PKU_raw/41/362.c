int main()
{
	int a,b,c,d,e;
	for(a=1;a<6;a++)
		for(b=1;b<6;b++)
			if(a!=b)
			for(c=1;c<6;c++)
				if(a!=c&&b!=c)
				for(d=1;d<6;d++)
					if(a!=d&&b!=d&&c!=d)
					for(e=1;e<6;e++)
						if(a!=e&&b!=e&&c!=e&&d!=e)
							if(e!=2&&e!=3)

						{
							int m[6];
							m[a]=(e==1);
							m[b]=(b==2);
							m[c]=(a==5);
							m[d]=(c!=1);
							m[e]=(d==1);
							if(m[1]==1&&m[2]==1&&m[3]==0&&m[4]==0&&m[5]==0)
								cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
						}
						return 0;
}