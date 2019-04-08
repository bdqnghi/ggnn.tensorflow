int main()
{
	int i,n,temp=39,isum,ins,step=0;
	char sum[40];
	for(i=0;i<40;i++) sum[i]='0';
	sum[39]='1';
	cin >> n;
	if(n==0) {
		cout << '1' << endl;
		return 0;
	}
	else{
	while(n > 0){
		for(i=0;i<40;i++){
			if(sum[i]!='0') {
				temp=i;
				break;
			}}
		for(i=39;i>=temp-1;i--){
			isum=(int)sum[i]-48;
			ins=isum*2+step;
			if(ins < 10){
				sum[i]=(char)(ins+48);
				step=0;
			}
			else{
				sum[i]=(char)(ins+38);
				step=1;
			}}
		n--;
	}}
	for(i=0;i<39;i++){
		if(sum[i] != '0') {
			temp=i;
			break;
		}}
	for(i=temp;i<=39;i++) cout << sum[i];
	cout << endl;
	return 0;
}
