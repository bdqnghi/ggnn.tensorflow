int main(){
	int n,i,j;
	int k;
	cin>>n;
	for(i=3;i<=n/2;i+=2){
		//cout<<i<<" "<<j<<endl;
		j = n-i;
		int flag;
		for(k=2;k<i;k++)
		{
			if(i%k!=0)
				flag=0;
			if(i%k==0){
				flag=1;
				break;
			}
		}
		if(flag == 1)continue;
		for(k=2;k<j;k++)
		{
			if(j%k!=0)
				flag=0;
			if(j%k==0){
				flag=1;
				break;
			}
		}
		if(flag == 0)
			cout<<i<<" "<<j<<endl;

	}
	return 0;
}
	

		
		
		
		
