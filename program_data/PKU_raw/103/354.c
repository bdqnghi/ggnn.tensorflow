int main(){
	int i,sum,l;
	char s[1000];
	cin>>s;
	l=strlen(s);
	for(i=0;i<l;i++){
		if(s[i]>='a'&&s[i]<='z')s[i]-=32;
	}
	for(i=0;i<l;i++){
		if(s[i]=='\0')break;
		sum=1;
		while(s[i]==s[i+1]){
			i++;
			sum++;
		}
		 cout<<"("<<s[i]<<","<<sum<<")";
	}
	return 0;
}
