int main()
{
	int x;
	scanf("%d",&x);
	if(x%3==0){
		printf("3");
	}
	if(x%5==0){
		if(x%3==0){
			printf(" 5");
		}else {
			printf("5");
		}
	}
	if(x%7==0){
		if(x%5==0||x%3==0){
			printf(" 7");
		}else {
			printf("7");
		}
	}
	if(x%3!=0&&x%5!=0&&x%7!=0){
		printf("n");
	}
	return 0;
}
