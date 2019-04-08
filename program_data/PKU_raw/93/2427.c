int main(){
	int a;
    scanf("%d",&a);
	if(a%3==0&&a%7==0&&a%5==0){
		printf("3 5 7");
	}
	if(a%3!=0){
		if(a%5==0){
			if(a%7==0){
				printf("5 7");
			}
			else{
				printf("5");
			}
		}
		else{
			if(a%7==0){
				printf("7");
			}
			else{
				printf("n");
			}
		}
	}
	if(a%3==0&&a%5==0&&a%7!=0){
				printf("3 5");
		}
	if(a%3==0&&a%5!=0){
			if(a%7==0){
				printf("3 7");
			}
			else{
				printf("3");
			}
		}
	return 0;
}