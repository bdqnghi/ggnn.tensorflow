int main()
{
	double n,i,a=0,b=0,c=0,d=0;
	cin>>n;
	for(i=1;i<=n;i=i+1)
	{
        double y;
		cin>>y;
		if(y<=18)a=a+1;
		else if(y<=35)b=b+1;
		else if(y<=60)c=c+1;
		else d=d+1;
	}
	double A,B,C,D;
	A=a/n*100.0;
	B=b/n*100.0;
	C=c/n*100.0;
	D=d/n*100.0;
    cout<<"1-18: "<<fixed<<setprecision(2)<<A<<"%"<<endl;
	cout<<"19-35: "<<fixed<<setprecision(2)<<B<<"%"<<endl;
	cout<<"36-60: "<<fixed<<setprecision(2)<<C<<"%"<<endl;
	cout<<"60??: "<<fixed<<setprecision(2)<<D<<"%"<<endl;
	return 0;
}