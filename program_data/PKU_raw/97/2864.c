int main()//?????
{
    int a,n;//???a,n
	cin>>a;//?????a
	n=a/100;//???????
	cout<<n<<endl;
	a=a-n*100;
	n=a/50;
	cout<<n<<endl;
	a=a-n*50;
	n=a/20;
	cout<<n<<endl;
	a=a-n*20;
	n=a/10;
	cout<<n<<endl;
	a=a-n*10;
	n=a/5;
	cout<<n<<endl;
	a=a-n*5;
	cout<<a;
	return 0;//?????
}