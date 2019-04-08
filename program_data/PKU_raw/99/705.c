//??? ?????
//??? 1200012878
//9?28?
int main()
{
	int n,i,age;
	int b=0,c=0,d=0,e=0;
	double m,s,p,q;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>age;
		if(age<=18&&age>=1)
			b=b+1;
		else
			if(age<=35&&age>=19)
				c=c+1;
		else
			if(age<=60&&age>=36)
				d=d+1;
		else
			if(age>=61)
				e=e+1;
	}
	m=1.0*b/n*100;
	s=1.0*c/n*100;
	p=1.0*d/n*100;
	q=1.0*e/n*100;
	cout<<"1-18: "<<setprecision(2)<<fixed<<m<<"%"<<endl;
	cout<<"19-35: "<<setprecision(2)<<fixed<<s<<"%"<<endl;
	cout<<"36-60: "<<setprecision(2)<<fixed<<p<<"%"<<endl;
	cout<<"60??: "<<setprecision(2)<<fixed<<q<<"%"<<endl;
	return 0;
}

			