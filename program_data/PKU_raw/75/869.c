int main()
{
	int num1[1000]={0},num2[1000]={0};
	int i=1,j=1,k;
	cin>>num1[0];
	while(cin.get()==',')
	{
		cin>>num1[i];
		i++;
	}
	cin>>num2[0];
	while(cin.get()==',')
	{
		cin>>num2[j];
		j++;
	}
	cout<<i<<" ";
	int num[1000]={0};int temp=0;
	for(k=0;k<1000;k++)
	{
		for(j=0;j<i;j++)
			if(num1[j]<=k&&k<num2[j])
				num[k]++;
		if(num[k]>temp)
			temp=num[k];
	}
	cout<<temp;
	return 0;
}