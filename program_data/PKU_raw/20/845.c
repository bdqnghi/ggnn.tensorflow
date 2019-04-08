int main()
{
	int i,k;
	char str[13]={0},substr[4]={0},max;
	while(cin>>str>>substr)
	{
		max=str[0];                      //?????
		for (i=0;i<9;i++)
			if (max<str[i+1])
				max=str[i+1];
		for (i=0;i<10;i++)               //??????????
		{
			if (str[i]==max)
			{
				k=i;
				break;
			}
		}
		for (i=9;i>k;i--)                //?????????????
			str[i+3]=str[i];
		for (i=k+1;i<=k+3;i++)           //??????
			str[i]=substr[i-k-1];
		cout<<str<<endl;
		for (i=0;i<10;i++)               //??????
			str[i]=0;
	}
	return 0;
}