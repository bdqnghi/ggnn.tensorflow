int main()
{
	int array[6][6]={0};
	int max[6]={0};
	for(int i=1;i<=5;i++)
		for(int j=1;j<=5;j++)
		{
			cin>>array[i][j];
			if(array[i][j]>array[i][max[i]])
				max[i]=j;
		}
	int have=0,result=0;
	for(int i=1;i<=5;i++)
	{
		int flag=1;
		for(int k=1;k<=5;k++)
		{
			if(array[k][max[i]]<array[i][max[i]])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			have=1;
			cout<<i<<" "<<max[i]<<" "<<array[i][max[i]]<<endl;
		}
	}
	if(!have)
		cout<<"not found"<<endl;
	return 0;
}