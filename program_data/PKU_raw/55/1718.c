int main()
{
	int a,b;
	long  ans = 0;
	char x[20] = {0};
	scanf("%d %s %d",&a,x,&b);
	if(a == b) printf("%s\n",x);
	//printf("%d %s %d\n",a,x,b);
	else{
		long flag = 1;
		for(int i = strlen(x) - 1;i >= 0;i --){
			long temp;
			if(x[i] >= '0' && x[i] <= '9') temp = x[i] - '0';
			if(x[i] >= 'A' && x[i] <= 'Z') temp = x[i] - 'A' + 10;
			if(x[i] >= 'a' && x[i] <= 'z') temp = x[i] - 'a' + 10;
			ans += temp * flag;
		//	printf("%lld\n",ans);
			flag *= a;
		}
		if(ans == 0) printf("0\n");
		else{
		//	printf("%lld\n",ans);
			long final[100] = {0};
			flag = 0;
			while(ans > 0){
				flag ++;
				final[flag] = ans % b;
				ans /= b;
			}
			for(int i = flag;i >= 1;i --){
				if(final[i] >= 10){
					printf("%c",final[i] - 10 + 'A');
				}
				else printf("%ld",final[i]);
			}
			printf("\n");
		}
	}
	return 0;
}