int main()
{
	double n,m,a,b,c,x1,x2,h,j;
	cin>>n;
	for(m=1;m<=n;m++)
	{
		cin>>a>>b>>c;
		if(b*b-4*a*c>0)
		{
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
	        x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
			if(-0.000001<x1&&x1<0)
				x1=0.00000;
			if(-0.000001<x2&&x2<0)
				x2=0.00000;
			cout<<"x1=";
			printf("%.5f",x1); 
			cout<<";x2=";
			printf("%.5f",x2); 
			cout<<endl;
		}
		else if(b*b-4*a*c==0)
		{
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
			if(-0.000001<x2&&x2<0)
				x2=0.00000;
			cout<<"x1=x2=";
	        printf("%.5f",x1); 
			cout<<endl;
		}
		else
		{
			h=-b/(2*a);
			j=sqrt(4*a*c-b*b)/(2*a);
			if(h==-0.00000)
				h=0.00000;
			if(j==-0.00000)
				j=0.00000;
			cout<<"x1=";
			printf("%.5f",h); 
			cout<<"+";
			printf("%.5f",j); 
			cout<<"i";
			cout<<";x2=";
			printf("%.5f",h); 
			cout<<"-";
			printf("%.5f",j); 
			cout<<"i"<<endl;


		}
	}
			return 0;
	
}
		
