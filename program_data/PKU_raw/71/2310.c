
int main()
{
	int n, i, a;
	int year, month1, month2;
	int day = 0;

	scanf("%d",&n);
	for (i = 0; i < n; i++){
		day=0;
		scanf("%d%d%d",&year,&month1,&month2);
		if (month1 > month2){
			a = month1;
			month1 = month2;
			month2 = a;
		}

		for (;;){
			if (month1 == month2){
				break;
			}
			
			if(month1 == 1 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8 || month1 == 10 || month1 == 12){
				day = day + 31;
				month1++;
				continue;
			}
			if (month1 == 4 || month1 == 6 || month1 == 9 || month1 == 11){
				day = day + 30;
				month1++;
				continue;
			}
			if (month1 == 2){
				if ((year % 4 == 0 && year % 100 != 0) || year % 400 ==0){
					day = day + 29;
					month1++;
					continue;
				}
				else {
					day = day + 28;
					month1++;
					continue;
				}
			}
		}
		if(day % 7 == 0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}