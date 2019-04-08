int main(){
	int num, leap_1=0 , leap_2=0 ,leap_3=0;
	scanf("%d", &num);
	if (num%3== 0){
		leap_1=1;
	}
    if (num%5== 0){
		leap_2=1;
	}
    if (num%7== 0){
		leap_3=1;
	}
	if (leap_1 * leap_2 * leap_3 == 1){
		printf("3 5 7");
	}
	else if (leap_1 * leap_2 == 1){
		printf("3 5");
	}
	else if (leap_1 * leap_3 == 1){
		printf("3 7");
	}
	else if (leap_2 * leap_3 == 1){
		printf("5 7");
	}
	else if (leap_1 == 1){
		printf("3");
	}
	else if (leap_2 == 1){
		printf("5");
	}
	else if (leap_3 == 1){
		printf("7");
	}
	else {
		printf("n");
	}
	return 0;
}
