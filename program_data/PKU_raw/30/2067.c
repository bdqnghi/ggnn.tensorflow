int main(){
	int n,sum=0;
	scanf("%d",&n);
	while(n>0){
		if(n%7!=0&&n%10!=7&&(n>79||n<70))
			sum+=pow(n,2);
		n--;
	}
	printf("%d\n",sum);
	return 0;
}