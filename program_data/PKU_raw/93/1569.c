int main()
{
	int n;
	scanf("%d",&n);
	if(n%3==0){
		if(n%5==0){
			if(n%7==0){
				printf("3 5 7");
			}
			if(n%7!=0){
				printf("3 5");
			}
		}
		if(n%5!=0){
			if(n%7==0){
				printf("3 7");
			}
			if(n%7!=0){
				printf("3");
			}
		}
	}
	if(n%3!=0){
		if(n%5==0){
			if(n%7==0){
				printf("5 7");
			}
			if(n%7!=0){
				printf("5");
			}
		}
		if(n%5!=0){
			if(n%7==0){
				printf("7");
			}
			if(n%7!=0){
				printf("n");
			}
		}
	}
	return 0;
}