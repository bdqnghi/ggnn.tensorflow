int main(){
	int n;
	cin>>n;
	while(1)
	{
		if(n==1) {//?????end

		cout<<"End"<<endl;break;
	}
	else
		while(n!=1)
		{
			if(n%2==1) {//??????
				cout<<n<<"*3+1="<<n*3+1<<endl;
				n=n*3+1;
			}
			else{//????
				cout<<n<<"/2="<<n/2<<endl;
				n/=2;
			}
		}
	}
}
