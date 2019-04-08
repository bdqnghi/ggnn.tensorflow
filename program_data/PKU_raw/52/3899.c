
int main()
{

	int input[100]={0};
	int *stop, *cut;
	int n, m;

	cin>>n>>m;
	for(int i=0; i<n; i++)
	{
		cin>>input[i];
	}

	cut=input;
	stop=input+n-m;


	for(int i=0; i<m; i++)
	{
		cout<<*(stop++)<<" ";
	
	}

	
	for(int i=0; i<n-m; i++)
	{
		cout<<*(cut++);
		if(i!=(n-m-1))
			cout<<" ";
	
	}

	

return 0; 
}
