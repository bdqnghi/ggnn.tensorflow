


int main(){
	double p;
	int i,cnt;
	char s1[505],s2[505];
	cin>>p;
	cin>>s1>>s2;
	if (strlen(s1)!=strlen(s2)){
		puts("error");
		return 0;
	}
	for (i=cnt=0;s1[i];i++){
		if (s1[i]!='A'&&s1[i]!='T'&&s1[i]!='G'&&s1[i]!='C'){
			puts("error");
			return 0;
		}if (s2[i]!='A'&&s2[i]!='T'&&s2[i]!='G'&&s2[i]!='C'){
			puts("error");
			return 0;
		}
		if (s1[i]==s2[i]){
			cnt++;
		}
	}
	if (cnt*1.0/i>p){
		puts("yes");
	}else 
		puts("no");
}