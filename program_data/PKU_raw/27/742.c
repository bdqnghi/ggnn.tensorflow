int main()
{
	int n,i;
	double a,b,c,x1,x2,d,r;
	cin >>n;
	for (i=1;i<=n;i++)
	{
		cin >>a>>b>>c;
		d=b*b-4*a*c;
		if (d>0)
		{
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			cout <<"x1=";
			printf("%.5f",x1);
			cout <<";x2=";
			printf("%.5f",x2);
			cout <<endl;
		}
		else if (d<0)
		{
			r=-b/(2*a);
			d=abs(d);
			x1=sqrt(d)/(2*a);
			cout <<"x1=";
			if (r==0)
				cout <<"0.00000";
			else
			    printf("%.5f",r);
			cout <<"+";
			printf("%.5f",x1);
            cout <<"i;x2=";
			if (r==0)
				cout <<"0.00000";
			else
			    printf("%.5f",r);
			cout <<"-";
			printf("%.5f",x1);
			cout <<"i"<<endl;
		}
		else
		{
			x1=-b/(2*a);
			cout <<"x1=x2=";
			printf("%.5f",x1);
			cout <<endl;
		}
	}

	return 0;
}