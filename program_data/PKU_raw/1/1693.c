int main()
{
	int func(int a,int b);
	int n;
	cin>>n;
	while(n--){
		int number;
		cin>>number;
		cout<<func(number,number)<<endl;
	}
	return 0;
}

int func(int a,int b)
{
	if(a==1){
		return 1;
	}
	if(b==1){
		return 0;
	}
	if(a%b==0){
		return func(a/b,b)+func(a,b-1);
	}
	return func(a,b-1);
}