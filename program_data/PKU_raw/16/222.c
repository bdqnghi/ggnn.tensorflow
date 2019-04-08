int main()
{
	int a;
	scanf("%d",&a);
	if(a==0)
		printf("%d",a);
	if(a!=0){
	for(;a>0;){
		printf("%d",a%10);
		a=a/10;
	}
	}
	return 0;
}
