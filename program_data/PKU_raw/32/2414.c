
int main()
{
	int n;cin>>n;
	for(int N=0;N<n;N++)
	{
		char a[110],b[110];
		cin>>a>>b;
		int A[110]={0},B[110]={0},result[110]={0};
		for(int i=strlen(a)-1;i>=0;i--) 
		{
			A[strlen(a)-i-1]=a[i]-'0';
		}
		for(int i=strlen(b)-1;i>=0;i--) 
		{
			B[strlen(b)-i-1]=b[i]-'0';
		}



		for(int i=0;i<110;i++)
		{
			result[i]+=(A[i]-B[i]);
			if(result[i]<0) {result[i]+=10;result[i+1]--;}
		}
		int t;
		for(t=109;t>0;t--) if(result[t]) break;
		for(;t>0;t--) cout<<result[t];
		cout<<result[0]<<endl;
	
	
	}

	cin.get();cin.get();cin.get();cin.get();cin.get();

}