//****************************************
//*?????(8.3) ????????? (1051)       
//*????? 1100012996       **
//*???2011.9.14                         
//****************************************
int main()
{
	int n;//n????
	cin>>n;
	double a,b,c;//a?b?c???
	for (int i=0;i<n;i++)
	{
		double x1,x2;
		cin>>a>>b>>c;
		double dot = b*b - 4*a*c;//???b^2-4ac??
		//?????????????????
		if (dot==0)
		{
			x1 = x2 = - b / ( 2 * a );
			cout<<fixed<<setprecision(5)<<"x1=x2="<<x1<<endl;
		} 
		else
		{
			if (dot>0)
			{
				x1 = (-b + sqrt(dot))/(2*a) ;
				x2 = (-b - sqrt(dot))/(2*a) ;
				cout<<fixed<<setprecision(5)<<"x1="<<x1<<";x2="<<x2<<endl;
			} 
			else
			{
				if (-b/(2*a)!=0)
				//????????-0.00000?????
				{
					cout<<fixed<<setprecision(5)<<"x1="<<-b/(2*a)<<"+"<<sqrt(-dot)/(2*a)
						<<"i;x2="<<-b/(2*a)<<"-"<<sqrt(-dot)/(2*a)<<"i"<<endl;
				} 
				else
				{
					cout<<fixed<<setprecision(5)<<"x1="<<b/(2*a)<<"+"<<sqrt(-dot)/(2*a)
						<<"i;x2="<<b/(2*a)<<"-"<<sqrt(-dot)/(2*a)<<"i"<<endl;
				}
				
			}
		}

	}



	return 0;

}
