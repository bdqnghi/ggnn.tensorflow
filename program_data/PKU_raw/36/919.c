int main(){
	int i,j;
	char s1[100],s2[100];
	cin>>s1>>s2;
	for(i=0;s1[i]!=0;i++){
		for(j=0;s2[j]!=0;j++)
			if(s1[i]==s2[j]){
				s2[j]=' ';
				break;
			}
		if(s2[j]==0)break;
	}
	if(s1[i]!=0)cout<<"NO"<<endl;
	else{
		for(i=0;s2[i]!=0;i++)
			if(s2[i]!=' ')break;
		if(s2[i]!=0)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}