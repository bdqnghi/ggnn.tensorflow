int x[2000],y[2000];
int main()
{
	int n=0;
	char lt;
	while(++n){
		cin>>x[n];
		cin.get(lt);
		if(lt!=',')break;
	}
	for(int i=1;i<=n;i++){
		cin>>y[i];
		cin.get(lt);
	}
	int max=0;
	for(int i=0;i<1000;i++){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(x[j]<=i&&i<y[j])cnt++;
		}
		max=max>cnt?max:cnt;
	}
	cout<<n<<' '<<max;
	return 0;
}