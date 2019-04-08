char array[N];
int main()
{
	cin>>array;
	int len=strlen(array);
	for(int t=2; t<=len; t++)//????????? 
	for(int i=0; i<=len-t; i++)
	{
		int sum=0;
		for(int j=0; j<t/2; j++)//????????? 
		{
			if(array[i+j]==array[i+t-1-j]) sum++;
		}
		if(sum==t/2)//? 
		{
			for(int j=i; j<i+t; j++)
			cout<<array[j];
			cout<<endl;
		}
	}
	return 0;
}