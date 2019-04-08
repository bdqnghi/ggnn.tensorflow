int a[305];
int main()
{
	int n,m;
	cin>>n>>m;
	while(n!=0&&m!=0){
		memset(a,0,sizeof(a));
		int step=0;
		int flag=0;
		int i=1;
		while(flag<n-1){
			step=0;
			for(;i<=n;i=i%n+1){
				if(a[i]==0)	step++;
				if(step==m){
					a[i]=1;
					break;
				}
			}
			flag++;	
		}
		for(int j=1;j<=n;j++)
			if(a[j]==0){
				cout<<j<<endl;
				break;
			}
		cin>>n>>m;
	}
	return 0;
}