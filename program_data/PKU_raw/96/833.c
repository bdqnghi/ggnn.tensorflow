int main()
{
	char dzs[100];
	char xdzs[100];
	gets(dzs);
	int N;
	N=strlen(dzs);
	if(N==1){
		printf("0\n%c",dzs[0]);
	}else{
	int n;
	int i;
	n=(dzs[0]-'0')*10+(dzs[1]-'0');
	int a,b;
	a=n/13;
	b=n%13;
	if(N==2&&n<13){
		printf("0\n%d",n);
	}else{
	if(a==0){
		xdzs[0]=' ';
	}
	else if(a!=0){
		xdzs[0]='0'+a;
	}
	
	for(i=2;i<N;i++){
		n=b*10+(dzs[i]-'0');
		a=n/13;
		b=n%13;
		xdzs[i-1]='0'+a;
	}
	for(i=0;i<N-2;i++){
		if(xdzs[i]!=' '){
			printf("%c",xdzs[i]);
		}
	}
	printf("%c\n",xdzs[N-2]);
	printf("%d", b);
	}
	}
	return 0;
}