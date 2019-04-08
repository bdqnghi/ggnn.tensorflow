//============================================================================
// Name        : fangcheng.cpp
// Author      : 1234
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================


int main()
{
	int n;
	double a,b,c,d,x1,x2;
	cin>>n;
	for(;n>0;n--)
	{
		cin>>a>>b>>c;//??n??

		d=b*b-4*a*c;

	if(d>0)
	   {
		x1=(-b+sqrt(d))/(2*a);//????????x1,x2
	    x2=(-b-sqrt(d))/(2*a);//
	    if(x1==-0)x1=0;
	    cout<<"x1=";
	    cout<<fixed<<setprecision(5)<<x1;
	    if(x2==-0)x2=0;
	    cout<<";x2=";
	    cout<<fixed<<setprecision(5)<<x2<<"\n";

	   }
	else if(d==0)
	     {
		  cout<<"x1=x2=";
		  if(b==0)cout<<0.00000;
	     cout<<fixed<<setprecision(5)<<(-b/(2*a))<<"\n";
		 }
	else
	      {x1=-1*b/(2*a);//??????
	       if(x1==-0) x1=0;
	       x2=sqrt(-d)/(2*a);//??????
	       cout<<"x1=";
	       cout<<fixed<<setprecision(5)<<x1;
	       cout<<"+";
	       cout<<fixed<<setprecision(5)<<x2;
	       cout<<"i"<<';';
	       cout<<"x2=";
	       cout<<fixed<<setprecision(5)<<x1;
	       cout<<"-";
	       cout<<fixed<<setprecision(5)<<x2;
	      cout<<"i"<<"\n";

	      }

	}


}