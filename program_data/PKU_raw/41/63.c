int main()
{
	int a,b,c,d,e,w[6],rank[6];
	for (a=1;a<=5;a++)
		for (b=1;b<=5;b++)
			for (c=1;c<=5;c++)
				for (d=1;d<=5;d++)
					for (e=1;e<=5;e++)
					{
						if (a*b*c*d*e==120&&a+b+c+d+e==15)
						{
							w[1]=(e==1);
							w[2]=(b==2);
							w[3]=(a==5);
							w[4]=(c!=1);
							w[5]=(d==1);
							rank[a]='A'-64;
							rank[b]='B'-64;
							rank[c]='C'-64;
							rank[d]='D'-64;
							rank[e]='E'-64;
							if (w[rank[1]]==1&&w[rank[2]]==1&&w[rank[3]]==0&&w[rank[4]]==0&&w[rank[5]]==0&&e!=2&&e!=3)
							{	
								cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
							}
						}
					}
					return 0;
}