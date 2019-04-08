int main()
{
	int n,s=0;
	scanf("%d",&n);
	while(n>0){
		if((n%7!=0)&&(n%10!=7)&&(n-n%10!=70)){
		s=s+n*n;
		}
		n=n-1;
	}
	printf("%d",s);
	return 0;
}
		