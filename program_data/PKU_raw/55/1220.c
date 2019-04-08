

long ab(char s){
	long r=100;

	if(s>='0'&&s<='9'){
		r=s-48;
	}
	else if(s>='a'&&s<='z'){
		r=s-87;
	}
	else if(s>='A'&&s<='Z'){
		r=s-55;
	}

	return r;
}

char ba(long k){

	char r='!';

	if(k>=0&&k<=9){
		r=k+48;
	}
	else if(k>=10&&k<=35){
		r=k+55;
	}

	return r;
}

int main(){

	long a=0;

	long b=0;

	char str[3000];

	char out[3000];

	cin>>a>>str>>b;

	long n=0;
	long num=0;
	long k=1;

	while(ab(str[n])!=100){
		n++;
	}

	for(int i=n-1;i>=0;i--){
		num+=ab(str[i])*k;
		k*=a;
	}

	int i=0;
	

	while(num!=0){
		out[i]=ba(num%b);
		num/=b;
		i++;
	}

	if(i==0) cout<<0;

	for(int j=i-1;j>=0;j--){
		cout<<out[j];
	}


	return 0;
	
}