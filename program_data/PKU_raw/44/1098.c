int reverse(int num){
	int sz[100];
	int i=0;
	int num1;
	num1=abs(num);
	while(num1>=10){
		sz[i]=num1%10;
		num1=num1/10;
		i++;
	}
	sz[i]=num1;
	int n=i;
	num1=0;
	for(i=0;i<=n;i++){
		num1=num1+sz[i]*pow(10,n-i);
	}
	if(num==0){
		return 0;
	}else if(num>0){
		return num1;
	}else if(num<0){
		return 0-num1;
	}
}
int main()
{
	int a;
	int k;
	for(k=1;k<=6;k++){
		scanf("%d",&a);
		a=reverse(a);
		printf("%d\n",a);
	}
	return 0;
}
