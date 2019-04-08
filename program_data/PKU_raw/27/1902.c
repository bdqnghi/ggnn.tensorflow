int main()
{
	int n;
	cin>>n;
	double a,b,c,delta,x1,x2,r,i;
	for(int p=1;p<=n;p++)
	{
		cin>>a>>b>>c;
		delta=b*b-4*a*c;
		if (delta>0)
		{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			cout<<"x1=";
			printf("%.5f", x1);
			cout<<";x2=";
			printf("%.5f\n",x2);
			cout<<endl;
		}
		else
		{
			if (delta==0)
			{
				x1=(-b)/(2*a);
				cout<<"x1=x2=";
				printf("%.5f", x1); 
				cout<<endl;
			}
			else
			{
				r=(-b)/(2*a);
				delta=-delta;
				i=(sqrt(delta))/(2*a);
				if (r==0)
				{
					r=abs(r);
				}
				cout<<"x1=";
				printf("%.5f",r);
				cout<<"+";
				printf("%.5f",i);
				cout<<"i;x2=";
				printf("%.5f",r);
				cout<<"-";
				printf("%.5f",i);
				cout<<"i"<<endl;
			}
		}
	}
	return 0;
}