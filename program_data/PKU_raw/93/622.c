int main(){
	int a;
	scanf("%d",&a);
	if(a%105==0){
		printf("3 5 7");
	}
    else{
		if(a%15==0){
			printf("3 5");
		}
		else if(a%21==0){
			printf("3 7");
		}
		else if(a%35==0){
			printf("5 7");
		}
		else{
			if(a%3==0){
				printf("3");
			}
			else if(a%5==0){
				printf("5");
			}
			else if(a%7==0){
				printf("7");
			}
			else{
				printf("n");
			}
		}
		return 0;
	}
}

