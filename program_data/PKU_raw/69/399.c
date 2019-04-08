char s1[201],s2[201];
int a1[201],a2[201],nlen1,nlen2;
int main(){
	int i,j;
	memset(a1,0,sizeof(a1));
	memset(a2,0,sizeof(a2));
	cin.getline(s1,201);
	cin.getline(s2,201);
	nlen1=strlen(s1);
	nlen2=strlen(s2);
	j=0;
	for(i = nlen1-1; i >= 0; i--) a1[j++]=s1[i]-'0';
	j=0;
	for(i = nlen2-1; i >= 0; i--) a2[j++]=s2[i]-'0';
	for(i = 0; i <= 200; i++) a1[i]+=a2[i];
	for(i = 0; i <= 200; i++){
		if(a1[i] >= 10){
			a1[i]-=10;
			a1[i+1]++;
		}
	}
	i = 200;
	while(a1[i]==0) i--;
	if(i<0) cout<<"0"<<endl;
	else{
		j=i;
		for(i=j;i>=0;i--) cout<<a1[i];
		cout<<endl;
	}
	//cin>>i;
	return 0;
}