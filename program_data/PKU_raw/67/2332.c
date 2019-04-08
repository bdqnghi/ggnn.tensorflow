//?????
int main()
{
	int n=0;
	int test[50][2];//??????????????????
	double rate[50];//?????
	int count=0;

	cin>>n;//????
	for(count=0;count<n;count++)
		cin>>test[count][0]>>test[count][1];

	for(count=0;count<n;count++)//?????????
	{
		rate[count]=(double)test[count][1]/test[count][0];
	}

	for(count=1;count<n;count++)
	{
		if(rate[count]-rate[0]>0.05)//????
			cout<<"better"<<endl;
		else
			if(rate[0]-rate[count]>0.05)//????
				cout<<"worse"<<endl;
			else//?????
				cout<<"same"<<endl;
	}

	return 0;
}