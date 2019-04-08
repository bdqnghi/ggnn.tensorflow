int main()
{
	int a,b,c,d,e,A,B,C,D,E;
	for(a=1;a<=5;a++)
		for(b=1;b<=5;b++)
			if (b!=a)
				for(c=1;c<=5;c++)
					if (c !=b &&c!=a)
						for(d=1;d<=5;d++)
							if (d!=a&&d!=b&&d!=c)
								{
					e = 15-a-b-c-d;
					if((e == 2)||( e ==3))
						continue;
	A=(e == 1);
	B=(b ==2);
	C=(a==5);
	D=(c!=1);
	E=(d==1);
	if(a*A+b*B+c*C+d*D+e*E==3&& a*A!=3 &&b*B!=3&&c*C!=3&&d*D!=3&&e*E!=3)
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
							}
	return 0;
}