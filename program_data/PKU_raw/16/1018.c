int main()
{
	int a[10],n,flag;
	flag = 0;
	scanf("%d",&n);
	if(n == 0) printf("0");
	else{
		while(n != 0){
			flag ++;
			a[flag] = n % 10;
			n = n / 10;
		}
		for(int i = 1;i <= flag;i ++){
			printf("%d",a[i]);
		}
	}
	return 0;
}