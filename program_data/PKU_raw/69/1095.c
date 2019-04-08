

int main(){
	char a[300],b[300];
	int s[300];
	for(int i=0;i<300;i++){
		s[i]=0;
	}
	cin.getline(a,300);
	cin.getline(b,300);
	int la=strlen(a);
	int lb=strlen(b);
	int k,i,j;
	if(la>=lb){
		for(k=0,i=la-1,j=lb-1;j>=0;i--,j--,k++){
			s[k]=a[i]-'0'+b[j]-'0';
		}
		for(;i>=0;i--,k++){
			s[k]=a[i]-'0';
		}
	}
	else{
		for(k=0,i=la-1,j=lb-1;i>=0;i--,j--,k++){
			s[k]=a[i]-'0'+b[j]-'0';
			//cout<<k<<s[k]<<' '<<a[i]<<b[j]<<endl;
		}
		for(;j>=0;j--,k++){
			s[k]=b[j]-'0';
			//cout<<k<<s[k]<<' '<<a[i]<<b[j]<<endl;
		}
	}
	for(int i=0;i<k;i++){
		if(s[i]>=10){
			s[i]-=10;
			s[i+1]++;
		}
	}
	while(s[k]==0){
		k--;
		if(k==-1){
			cout<<'0'<<endl;
			return 0;
		}
	}
		for(int i=k;i>=0;i--){
			cout<<s[i];
		}
		cout<<endl;
	return 0;
}

