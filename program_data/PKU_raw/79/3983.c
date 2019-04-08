int main()
{
	int a,p=0;
	int n[300],m[300];
	
	do
	{
		cin>>n[p]>>m[p];
		p++;
	}while(n[p-1]!=0&&m[p-1]!=0);
	for(int q=0;q<p-1;q++)
		{
			a=0;
			for(int i=2;i<=(n[q]);i++)
				a=(a+m[q])%i;
			cout<<a+1<<endl;
	}
	return 0;
}
