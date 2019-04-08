int main(){
	int a,b,i;
	cin>>a;
	
	for(i=1;i<10000;i++)
	{
		if(a==1)
	{cout<<"End"<<endl;
	return 0;}

		
	else if(a%2==0)
	{b=a/2;
	cout<<a<<"/2="<<b<<endl;
	a=b;}
	else
	{b=3*a+1;
	cout<<a<<"*3+1="<<b<<endl;
	a=b;}
}
	return 0;
}