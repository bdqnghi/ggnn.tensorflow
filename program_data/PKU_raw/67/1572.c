int main()
{
	int n,k;
	double groups[1000][3];
	cin>>n;
	for(k=0;k<n;k++)
	{
		cin>>groups[k][0]>>groups[k][1];
	}
	for(k=0;k<n;k++)
	{
		groups[k][2]=groups[k][1]/groups[k][0];
	}
	for(k=1;k<n;k++)
	{
		if((groups[k][2]-groups[0][2])>0.05)
			cout<<"better"<<endl;
		else if((groups[0][2]-groups[k][2])>0.05)
			cout<<"worse"<<endl;
		else
			cout<<"same"<<endl;
	}
	return 0;
}
