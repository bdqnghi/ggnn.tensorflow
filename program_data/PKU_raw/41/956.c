//****????         *****
//****?? 1300012732  *****



int main()
{
	int a,b,c,d,e,sa,sb,sc,sd,se,ta,tb,tc,td,te;
	for(a=1;a<=5;a++)
		for(b=1;b<=5;b++)
			for(c=1;c<=5;c++)
				for(d=1;d<=5;d++)
					for(e=1;e<=5;e++)
					{
						sa=(e==1);
						sb=(b==2);
						sc=(a==5);
						sd=(c!=1);
						se=(d==1);
						ta=sa*(a-1)*(a-2);
						tb=sb*(b-1)*(b-2);
						tc=sc*(c-1)*(c-2);
						td=sd*(d-1)*(d-2);
						te=se*(e-1)*(e-2);
						if((a-b)*(a-c)*(a-d)*(a-e)*(b-c)*(b-d)*(b-e)*(c-d)*(c-e)*(d-e)!=0 && ta==0 && tb==0 && tc==0 && td==0 && te==0 && sa+sb+sc+sd+se==2 && e!=2 && e!=3)
							cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
					}
					return 0;
}
						
