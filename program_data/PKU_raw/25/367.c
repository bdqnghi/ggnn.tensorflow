int main(){
	int i,j,n;
	int b[15]={0};
	int t=100000000;
	cin>>n;
	if(n==0) cout<<1;
	else{
	b[0]=2;
	for(i=1;i<n;i++)
	{
		for(j=0;j<15;j++){
			b[j]*=2;
		}
		for(j=0;j<14;j++)
			if(b[j]>=t) {b[j+1]++; b[j]-=t;}
	}
	for(i=14;b[i]==0;i--);
	for(j=i;j>=0;j--) {
		if(i!=j&&b[j]<t/10) cout<<'0';
		cout<<b[j];
	}
	}
	return 0;
}