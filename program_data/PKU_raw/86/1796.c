int main()
{
	int n;
	cin >> n;
	while(n --)
	{
		int m,input[100];
		int sum=60;
		cin>>m;
		input[0]=0;
		for(int i=1; i<= m;i++)
		{
			cin>>input[i];
			if(input[i]+i*3<=60&&input[i]<60)//?i??????????????60
			{
				sum-=3;
			}
			else if(input[i]+i*3<=63)
				sum=input[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
