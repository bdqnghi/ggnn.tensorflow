int num=0;//????????
int p=0;//?????????????
int main()
{
	void putApple(int M,int N);//????
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		num=0;
		p=0;
		int M,N;
		cin>>M>>N;
		putApple(M,N);
		cout<<num<<endl;
	}
	return 0;
}

void putApple(int M,int N)
{
	if(N==1||M==0)
		num++;
	else
	{
		if(M>=N)
		{
			putApple(M-N,N);
			putApple(M,N-1);
		}
		else
			putApple(M,M);
	}
}