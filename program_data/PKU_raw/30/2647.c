int main (){
	int n,sum1=0,sum2=0,sum,i;
	cin>>n;
	for(i=1;i<=n;i++)
		if(((i>=70)&&(i<80))||(i%7==0)||(i%10==7))
			sum1 = sum1 + i*i;
	for(i=1;i<=n;i++)
		sum2 = sum2 + i*i;
	sum = sum2 - sum1;
	cout<<sum;
}