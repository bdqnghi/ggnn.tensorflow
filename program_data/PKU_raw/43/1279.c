int main()
{
	int m,i,j,k,a,b;
	cin>>m;
	for(i=3;i<=m/2;i+=2){
		a=1;b=1;
		for(j=2;j<i/2;j++){
			if(i%j==0)
				a=0;}
		for(k=2;k<(m-i)/2;k++){
			if((m-i)%k==0)
				b=0;}
		if(a*b!=0)
			cout<<i<<' '<<m-i<<endl;}
	return 0;
}