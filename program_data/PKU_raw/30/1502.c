int main(){
	int n,sum=0;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		if(!(i%10==7)&&!(i%7==0)&&!(i/10==7)){
			sum=sum+i*i;}
           }
	cout<<sum<<endl;
	return 0;
}