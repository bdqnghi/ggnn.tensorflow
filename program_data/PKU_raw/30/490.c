int main (){
	int n,i,ten,ge,s=0;
	cin>>n;
	if (n>9){
	for (i=10;i<=n;i++){
		ge=i%10;
		ten=(i-(i%10))/10;
		if ((i%7!=0)&&(ge!=7)&&(ten!=7))
			s=s+i*i;
			}
	cout<<s+236;}
	else{
		for (i=1;i<=n;i++){
			ge=i%7;
			if ((i%7!=0)&&(ge!=7))
				s=s+i*i;
				}
		cout<<s;
	}
	return 0;
}
