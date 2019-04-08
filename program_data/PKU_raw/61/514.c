int main()
{   int N;
	cin>>N;
	int i;
	int A[20];
	A[0]=1;
	A[1]=1;
	for(i=2;i<20;i++)
	{
		A[i]=A[i-1]+A[i-2];
	}

	int j;
	int a;
	for(j=0;j<N;j++)
	{
		cin>>a;
		if(a>=1&&a<=20)
		  cout<<A[a-1]<<endl;

	}

    return 0;
}