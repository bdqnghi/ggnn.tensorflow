

int main(){
	int n;
	int i,sum=0;
	cin>>n;
	for(i=1;i<=n;i++){
		if(i%7==0||i%10==7||(i-i%10)/10==7)
			continue;
		else
			sum=sum+pow((double)i,2.0);
	}
	cout<<sum<<endl;
	return 0;
}
