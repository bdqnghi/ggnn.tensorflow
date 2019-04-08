int main()
{
	int k;
	cin >> k;
	while(k!=1)//???1
	{
		if(k%2){
			cout << k;
                            cout <<"*3+1="<<(k=3*k+1)<<endl;//??
		}else{
			cout << k ;
                            cout<< "/2="<<(k/=2)<<endl;//??
	}}
	cout << "End"<<endl;
	return 0;
}
