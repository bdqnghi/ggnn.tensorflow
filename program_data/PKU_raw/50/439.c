
int dayOfMonth(int month);

int main(){

	int w;
	
	scanf("%d", &w);

	for(int i = 1; i <= 12; i++){
	
		int	week = (w+12)%7;
		if(week == 5){
			printf("%d\n", i);
		}

		w = (w + dayOfMonth(i))%7;
	}


	return 0;
}

int dayOfMonth(int month){
	switch(month){
		case 1: return 31;
		case 2: return 28;
		case 3: return 31;
		case 4: return 30;
		case 5: return 31;
		case 6: return 30;
		case 7: return 31;
		case 8: return 31;
		case 9: return 30;
		case 10: return 31;
		case 11: return 30;
		default: return 31;
	}

}