int sushu(int x)
{
	int i,k=0;
	for(i=1;i<=x;i++) if(x%i==0) k=k+1;
	if(k==2) return 1;
	else return 0;		
	}
main()
{
	int n,i;
	cin>>n;
	for(i=1;i<=n-2;i++) if(sushu(i)&&sushu(i+2)) cout<<i<<" "<<i+2<<endl;
	if(n<5) cout<<"empty";
	}
