int main()
{
	int d[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
	int n;
	cin>>n;
	while(n--){
		int year,month1,month2;
		cin>>year>>month1>>month2;
		if(month1>month2){
			int temp;
			temp=month1;
			month1=month2;
			month2=temp;
		}
		int i,sum=0;
		if(year%4==0&&year%100!=0||year%400==0){
			for(i=month1;i<month2;i++){
				sum+=d[1][i-1];
			}
			if(sum%7==0) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else{
			for(i=month1;i<month2;i++){
				sum+=d[0][i-1];
			}
			if(sum%7==0) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
	return 0;
}