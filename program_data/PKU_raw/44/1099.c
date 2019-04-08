int reverse(int num){
	int num1;
	int a;
	num1=abs(num);
	int num2=0;
	while(num1>=10){
		a=num1%10;
		num1=num1/10;
		num2=num2*10+a;
	}
	a=num1%10;
	num2=num2*10+a;
	if(num==0){
		return 0;
	}else if(num>0){
		return num2;
	}else if(num<0){
		return 0-num2;
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