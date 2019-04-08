int main()
{
	int n,i,m;
	double e,f,g,h,a=0,b=0,c=0,d=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>m;
		if(m<=18)
			a=a+1;//??????
		if(m>=19&&m<=35)
			b=b+1;//??
		if(m>=36&&m<=60)
			c=c+1;//??
		if(m>60)
			d=d+1;//??
	}
	e=a/n*100;
	f=b/n*100;
	g=c/n*100;
	h=d/n*100;
	cout<<"1-18:"<<" ";//?????
		printf("%0.2f", e);
			cout<<"%"<<endl;
			cout<<"19-35:"<<" ";
			printf("%0.2f", f);
			cout<<"%"<<endl;
			cout<<"36-60:"<<" ";
			printf("%0.2f", g);
			cout<<"%"<<endl;
			cout<<"60??:"<<" ";
			printf("%0.2f", h);
			cout<<"%"<<endl;
		return 0;
}

