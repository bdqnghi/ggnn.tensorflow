
int main(){
	char str1[100]={0},str2[100]={0},*p,*q;
	cin>>str1>>str2;
	int len1 = strlen(str1),len2 = strlen(str2),flag;
	if(len1 != len2){
		cout<<"NO"<<endl;
		return 0;
	}
	for(p = str1;p < str1 + len1;++p){
		flag = 0;
		for(q = str2;q < str2 + len2;++q){
			if(*p == *q){
				*q = 0;
				++flag;
				break;
			}
		}
		if(!flag){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}