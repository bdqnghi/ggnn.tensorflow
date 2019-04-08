int main()
{int n=0,a=0,b=0;
cin>>n;
while(1)
{	if(n==1)break;
	if(n%2==0){a=n/2;
	cout<<n<<"/2="<<a<<endl;
	n=n/2;}
else{b=3*n+1;
    cout<<n<<"*3+1="<<b<<endl;
    n=3*n+1;
}
}cout<<"End"<<endl;
return 0;}