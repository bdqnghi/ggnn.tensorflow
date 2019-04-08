int main()
{
	double n=0,i=0,p=0,q=0,x=0,y=0;
	double z=0,w=0;
	cin >> n >> p >> q;
	z=q/p;
	for(i=1;i<n;i=i+1)
	{
		cin >> x >> y;
		w=y/x;
	if (w-z>=0.05)
		cout << "better"<<endl;
	else 
	{
		if(z-w>=0.05)
		cout << "worse" <<endl;
		else 
			cout <<"same" <<endl;
	}
	}
	return 0;
}