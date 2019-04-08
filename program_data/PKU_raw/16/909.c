int main()
{
	int n;
	cin>>n;
	if(n/10==0)cout<<n<<endl;
	else if(n/100==0)cout<<n%10<<n/10<<endl;
	else if(n/1000==0)cout<<n%10<<n%100/10<<n/100<<endl;
	else if(n/10000==0)cout<<n%10<<n%100/10<<n%1000/100<<n/1000<<endl;
	else if(n==10000)cout<<1<<endl;
	return 0;
}