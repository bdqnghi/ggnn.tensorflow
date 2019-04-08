int main(){
	int i;
	scanf("%d", &i);		
	if(i%3 == 0 && i%5 == 0 && i%7 ==0){
		printf("3 5 7");
		return 0;
	}
if(i%3 != 0 && i%5 == 0 && i%7 ==0){
		printf("5 7");
		return 0;
	}
	if(i%3 == 0 && i%5 != 0 && i%7 ==0){
		printf("3 7");
		return 0;
	}
	if(i%3 == 0 && i%5 == 0 && i%7 !=0){
		printf("3 5");
		return 0;
	}

if(i%3 == 0 && i%5 != 0 && i%7 !=0){
		printf("3");
		return 0;
	}
	if(i%3 != 0 && i%5 == 0 && i%7 !=0){
		printf("5");
		return 0;
	}
	if(i%3 != 0 && i%5 != 0 && i%7 ==0){
		printf("7");
		return 0;
	}
if(i%3 != 0 && i%5 != 0 && i%7 !=0){
		printf("n");
		return 0;
	}


	return 0;
}
