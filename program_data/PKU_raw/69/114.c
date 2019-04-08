int main(){
	char a[300],b[300];
	cin>>a;
	cin>>b;
	int len_1=strlen(a);
	int len_2=strlen(b);
	int len=len_1;
	if(len_2>len_1){
		len=len_2;
	}
	int n_p[300]={0};
	int n_q[300]={0};
	int i=0,j=0;
	for(i=0;i<len_1;i++){
		n_p[299-i]=a[len_1-i-1]-'0';
	}
	for(j=0;j<len_2;j++){
		n_q[299-j]=b[len_2-j-1]-'0';
	}
	int end[300]={0};
	for(i=299;i>0;i--){
		if(n_p[i]+n_q[i]<10){
			end[i]=n_p[i]+n_q[i];
		}
		if(n_p[i]+n_q[i]>=10){
			end[i]=n_p[i]+n_q[i]-10;
			n_p[i-1]++;
		}
	}
	for(j=0;j<299;j++){
		if(end[j]!=0)break;
	}
//	cout<<len<<endl;
	for(i=j;i<300;i++){
		cout<<end[i];
	}
	cout<<endl;
	return 0;
}