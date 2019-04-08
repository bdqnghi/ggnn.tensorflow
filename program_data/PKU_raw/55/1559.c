int f(int a,int n){
	if(n==0) return 1;
	else if(n==1) return a;
	else return(a*f(a,n-1));
}
	char n[100],m[100];
int main(){
	int a,b,num=0;
	cin>>a>>n>>b; 
	for(int i = 0;i < (int)strlen(n);i ++){
		if(islower(n[i])) num+=((int)n[i]-87)*f(a,(int)strlen(n)-i-1);
		else if(isupper(n[i])) num+=((int)n[i]-55)*f(a,(int)strlen(n)-i-1);
		else if(isdigit(n[i])) num+=((int)n[i]-48)*f(a,(int)strlen(n)-i-1);
	}if (num == 0) {puts("0"); return 0;}
	int i=0;
	while(num>0){
		if(num%b>9) {
			m[i]=(char)(num%b+55);num=num/b;
		}
		else if(num%b==0) {
			m[i]='0';num=num/b;
		}
		else {
			m[i]=(char)(num%b+48);num=num/b;
		}
		i++;
	}
	for (int j = 1; j <= i; j++) cout <<m[i - j];
	return 0;
}
