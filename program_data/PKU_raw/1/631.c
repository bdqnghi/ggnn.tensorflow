void decprime(int begain,int a);
int sum=1;
int main()
{
	int n,a;
	int k;cin>>n;
	for(k=0;k<n;k++){
		cin>>a;
		 decprime(2,a) ;
		 cout<<sum<<endl;
		 sum=1;
	}
	return 0;
}
void decprime(int begain,int a)
{
	int i;
	 //int u=int(sqrt(double(a)));
//int m[10000]={};

	//if(a==2||a==3||a==5)return 1;
	//else{
		for(i=begain;i<=a;i++){
		if(a%i==0&&i<=a/i)
		{
			sum++;
			decprime(i,a/i);
		}
		if(i>a/i)break;
			//m[i]=decprime(a/i);
		//else m[i]=0;
//sum+=m[i];
		//}
	 //return sum+1;
	 }
		}
