struct way
{
	double sum;
	double effect;
	double rate;
} wine, improve[100];
void compare(double a,double b)
{
	if(fabs(a-b)<0.05)
	{
		cout<<"same"<<endl;
	}
	else if(a>b)
	{
		cout<<"worse"<<endl;
	}
	else
	{
		cout<<"better"<<endl;
	}
}
int main()
{
	int n,i;
	cin>>n;
	cin>>wine.sum>>wine.effect;
	wine.rate=wine.effect/wine.sum;
	for(i=0;i<n-1;i++)
	{
		cin>>improve[i].sum>>improve[i].effect;
		improve[i].rate=improve[i].effect/improve[i].sum;
		//cout<<improve[i].sum<<improve[i].effect<<improve[i].rate;
	}
	for(i=0;i<n-1;i++)
		compare(wine.rate,improve[i].rate);
	return 0;
}
		

	
