int legal(char *p){//??????????
	int i;
	for(i=0;*(p+i)!=0;i++){
		if(i==0){
			if(*(p+i)!='_'&&!(*(p+i)>='a'&&*(p+i)<='z')&&!(*(p+i)>='A'&&*(p+i)<='Z'))break;
		}
		else if(*(p+i)!='_'&&!(*(p+i)>='a'&&*(p+i)<='z')&&!(*(p+i)>='A'&&*(p+i)<='Z')
				&&!(*(p+i)>='0'&&*(p+i)<='9'))break;
	}
	if(*(p+i)==0)return 1;
	return 0;
}
int main(){
	int n;
	char string[81];
	cin>>n;
	cin.getline(string,80);
	for(;n>0;n--){
		cin.getline(string,81);
		cout<<legal(string)<<endl;
	}
	return 0;
}
