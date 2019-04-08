
int main()
{
	int n;
	cin>>n;
	double sum;
	double efficient;
	double sample;
	int i=0;
	for (i=1;i<=n;i++)
	{
		cin>>sum>>efficient;
		if (i==1)
			sample=efficient/sum;
		else if((efficient/sum)-sample>0.05)
			cout<<"better"<<endl;
		else if (sample-(efficient/sum)>0.05)
			cout<<"worse"<<endl;
		else
			cout<<"same"<<endl;

	}
	return 0;
}
