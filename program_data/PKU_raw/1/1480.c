int divide(int d,int n)
{
	int sum=0;
	for(int i=d;i<n;i++){
		if (n%i==0&&(n/i)>=i){
			sum=sum+1;
			sum=sum+divide(i,n/i);}}
	return (sum);
}
int main()
{
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		cout<<divide(2,num)+1<<endl;}
	return 0;
}
