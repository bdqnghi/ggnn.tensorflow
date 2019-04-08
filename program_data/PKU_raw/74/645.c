int huiwen(int a);
int prime(int a);
int main()
{
    int m,n,i,t=0;
	scanf("%d%d",&m,&n);
	for (i=m;i<=n;i++){
		if (huiwen(i)&&prime(i)){
			if (t){
				printf(",");
			}
			printf("%d",i);
			t++;
		}
	}
	if (t==0){
		printf("no");
	}
	printf("\n");
	return 0;
}
int huiwen(int a)
{
	int i,b=0;
	for (i=a;i>0;i/=10){
		b=b*10+i % 10;
	}
	if (a==b){
		return 1;
	}else {
		return 0;
	}
}
int prime(int a)
{
	int i;
	if (a==1){
		return 0;
	}
	for (i=2;i<a;i++){
		if (a%i==0){
			return 0;
		}
	}
	return 1;
}
