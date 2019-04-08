int main( )
{ 
	int num,m;
	cin>>num;
	while(num!=1)
	{
		m=num;
		if(num%2==0)num=num/2,cout<<m<<"/"<<"2="<<num<<endl;
		else num=num*3+1,cout<<m<<"*3+1="<<num<<endl;
	}
	cout<<"End";                                         
    return 0;
}