void coutnoneg (double a)
{
	if(a==0) cout<<0.0;
	else cout<<a;
}
int main()
{
	int n;
	double a,b,c,d,x1,x2;
	cout<<fixed<<setprecision(5);
	for(cin>>n;n--;)
	{
      cin>>a>>b>>c;
	  d=b*b-4*a*c;
	  if(d>0)
	   {
	     x1 = ( -b + sqrt(b*b-4*a*c))/(2*a);
		 x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
		 cout<<"x1=";
		 coutnoneg(x1);
		 cout<<";x2=";
		 coutnoneg(x2); 
	   }
	  if(d==0)
	   {
		  x1 = (-1*b)/(2*a);
          cout<<"x1=x2=";
		  coutnoneg(x1);	   
	   }
	  else if(d<0)
	   {
        x1 = (-b)/(2*a);
		x2 = sqrt(-d)/(2*a);
		cout<<"x1=";
		coutnoneg(x1);
		cout<<'+';
		coutnoneg(x2);
		cout<<"i";
		cout<<";x2=";
		coutnoneg(x1);
		cout<<'-';
		coutnoneg(x2);
		cout<<"i";
	   }
cout<<endl;	
	}
return 0;
}