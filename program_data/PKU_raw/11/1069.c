int main()
{
	int year[2]={365,366};
	int month[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
	int y,m,d;
	cin>>y>>m>>d;
	int type;
	if((y%4==0&&y%100!=0)||y%400==0){
		type=1;
	}
	else{
		type=0;
	}
	int i;
	int sum=0;
	for(i=0;i<m-1;i++){
		sum+=month[type][i];
	}
	sum+=d;
	cout<<sum<<endl;
	return 0;
}
