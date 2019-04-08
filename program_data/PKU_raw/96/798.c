int main(){
	char a[101];
	int	b[100]={0};
	int i,n,m,x;
	scanf("%s",a);
	n=strlen(a);
	
	
	if(((a[0]-'0')*10+(a[1]-'0'))<13){
		x=(a[0]-'0')*10+a[1]-'0';
		for(i=2;i<n;i++){
		b[i-2]=(x*10+(a[i]-'0'))/13;
		x=(x*10+(a[i]-'0'))%13;
	}
		m=n-2;
	}
	else{
		x=a[0]-'0';
		for(i=1;i<n;i++){
		b[i-1]=(x*10+(a[i]-'0'))/13;
		x=(x*10+(a[i]-'0'))%13;
	}
		m=n-1;
	}
	for(i=0;i<m-1;i++){
		printf("%d",b[i]);
	}
	printf("%d\n",b[m-1]);
	printf("%d",x);
	return 0;
}