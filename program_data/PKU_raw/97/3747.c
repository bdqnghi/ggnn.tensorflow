int main()
{
	int num,j,i,an[6]={100,50,20,10,5,1};
	cin>>num;
	cout<<num/an[0]<<endl;
	for(i=1;i<6;i++)
	{
	num=num-num/an[i-1]*an[i-1];
	cout<<num/an[i]<<endl;
	}
	return 0;
}