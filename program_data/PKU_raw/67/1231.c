int main()
{
	int num;
	cin>>num;
	float a[1000];
	float b[1000],c[1000];
	for(int i=0;i<num;i++)
	{
		cin>>a[i]>>b[i];
		c[i]=b[i]/a[i];
	}
	for(int j=1;j<num;j++)
	{
		if(c[j]-c[0]>0.05)
		{cout<<"better"<<endl;}
		else if(c[0]-c[j]>0.05)
			{cout<<"worse"<<endl;}
		//if(-0.05<=(c[j]-c[0])<=0.05)
		else
		{cout<<"same"<<endl;}
	}
		return 0;
}