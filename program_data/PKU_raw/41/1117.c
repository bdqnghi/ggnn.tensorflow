int main()
{
	int a,b,c,d,e;
	for(a=1;a<=5;a++){
		for(b=1;b<=5;b++){
			for(c=1;c<=5;c++){
				for(d=1;d<=5;d++){
					for(e=1;e<=5;e++)
					{
						if((((a-b)*(a-c)*(a-d)*(a-e)*(b-c)*(b-d)*(b-e)*(c-d)*(c-e)*(d-e))!=0)&&(e!=2)&&(e!=3))// a b c d e hubuxiangdeng
						{
							if((((a==1)||(a==2))&&(e!=1))||(((a!=1)&&(a!=2))&&(e==1)))//a shuo de hua
								break;
							if((((b==1)||(b==2))&&(b!=2))||(((b!=1)&&(b!=2))&&(b==2)))//b shuo de hua
								break;
							if((((c==1)||(c==2))&&(a!=5))||(((c!=1)&&(c!=2))&&(a==5)))//c shuo de hua
								break;
							if((((d==1)||(d==2))&&(c==1))||(((d!=1)&&(d!=2))&&(c!=1)))//d shuo de hua
								break;
							if((((e==1)||(e==2))&&(d!=1))||(((e!=1)&&(e!=2))&&(d==1)))//e shuo de hua
								break;
							cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
						}
					}}}}}
	return 0;
}