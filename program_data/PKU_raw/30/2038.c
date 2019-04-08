int main()
{
	int n,i,S,f,k,r;
	S=0;
	f=0;
	scanf("%d",&n);
	for(i=0;i<n+1;i++){
		if(i%7==0||(i-7)%10==0||i/10==7){
		S+=i*i;}
	}
	for(k=0;k<n+1;k++){
	f+=k*k;
	}
	r=f-S;
	printf("%d",r);
	return 0;
}