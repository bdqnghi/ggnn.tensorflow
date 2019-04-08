int main()
{
	int num;
	cin>>num;
	while(num--){
		int n;
		cin>>n;
		if(n==0) cout<<"60"<<endl;
		else{
			int a[20],i,sum=60,time=60;
			for(i=0;i<n;i++)
				cin>>a[i];
			for(i=0;i<n;i++){
				if(time-a[i]<=3){
					time=time-a[i];
					if(time>0) sum-=time;
					break;
				}
				else{
					time-=3;
					sum-=3;
				}
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}
