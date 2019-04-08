int main()
{
	char A[110][110]={0};
	int i=0;
	while(cin>>A[i])
	{
		i++;
	}
	int num;
	for(int j=0;j<i-2;j++)
	{
		if(strcmp(A[i-2],A[j])==0)
		{
			strcpy(A[j],A[i-1]);
		}
	}
	
	for(int j=0;j<i-3;j++)
	{
		cout<<A[j]<<' ';
	}
	cout<<A[i-3];
	return 0;

}