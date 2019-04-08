
int main()
{
	int n,a,b;
	cin>>n;
	while(n!=1){//????
		if(n%2==0){//?????2
			a=n/2;
			cout<<n<<"/"<<"2"<<"="<<a<<endl;
			n=a;
		}
		else{//????3?1
			b=n*3+1;
			cout<<n<<"*"<<"3"<<"+"<<"1"<<"="<<b<<endl;
			n=b;
		}
	}
	cout<<"End"<<endl;//???1??end
	return 0;
}
