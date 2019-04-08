int main()
{
	int n,i;
	double a,b,c,x,y;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		if(b*b-4*a*c>0)
		{
			x=(-b+sqrt(b*b-4*a*c))/(2*a);
			y=(-b-sqrt(b*b-4*a*c))/(2*a);
			cout<<"x1=";
			printf("%.5lf",x);
			cout<<";x2=";
			printf("%.5lf\n",y);
		}
		else if(b*b-4*a*c==0)
		{
			x=(-b+sqrt(b*b-4*a*c))/(2*a);
			cout<<"x1=x2=";
			printf("%.5lf\n",x);
		}
		else
		{
			x=(sqrt(-b*b+4*a*c))/(2*a);
			if(b!=0)
				y=(-b)/(2*a);
			else y=0;
			cout<<"x1=";
			printf("%.5lf",y);
			cout<<"+";
			printf("%.5lf",x);
			cout<<"i;x2=";
			printf("%.5lf",y);
			cout<<"-";
			printf("%.5lf",x);
			cout<<"i"<<endl;
		}
	}
	return 0;
}
