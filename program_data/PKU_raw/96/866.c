
char divider[101] = {0},answer[100] = {0};
int divide13(int);

int main(){
	int num;char *p;
	cin>>divider;
	num = divide13(strlen(divider));
	for(p = answer;*p == '0';++p);      //????????????
	if(*p)cout<<p<<endl<<num<<endl;
	else cout<<"0\n"<<num<<endl;
	return 0;
}

int divide13(int len){
	int num = 0,pos = 0,ans;
	for(;pos < len;++pos){
		num = 10 * num + divider[pos] - '0';
		if(num < 13){   //??????
			answer[pos] = '0';
		}
		else{
			ans = num/13;
			answer[pos] = '0' + ans;
			num -= 13 * ans;
		}
	}
	return num;
}