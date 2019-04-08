int main()
{
	int num,i;
	int reverse(int num);
	for(i=1;i<=6;i++){
		scanf("%d",&num);
		printf("%d\n",reverse(num));
	}
	return 0;
}
int reverse(int num)
{
	int t=0,i,zf=1;
	if(num<0){
		num=-num;
		zf=-1;
	}
	for(i=1;;i++){
		t=t*10+num%10;
		if(num<10)break;
		num=num/10;
	}
	t=t*zf;
	return(t);
}