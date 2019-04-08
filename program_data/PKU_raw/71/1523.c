int main()
{
	int year[200],month1[200],month2[200],month11[200],month22[200];
	int n;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&year[i],&month1[i],&month2[i]);
	}
	for(i=0;i<n;i++){
		if(year[i]%4==0&&year[i]%100!=0){
			switch (month1[i]){
			case 1:month11[i]=0;break;
			case 2:month11[i]=0+31;break;
			case 3:month11[i]=0+31+29;break;
			case 4:month11[i]=0+31+29+31;break;
			case 5:month11[i]=0+31+29+31+30;break;
			case 6:month11[i]=0+31+29+31+30+31;break;
			case 7:month11[i]=0+31+29+31+30+31+30;break;
			case 8:month11[i]=0+31+29+31+30+31+30+31;break;
			case 9:month11[i]=0+31+29+31+30+31+30+31+31;break;
			case 10:month11[i]=0+31+29+31+30+31+30+31+31+30;break;
			case 11:month11[i]=0+31+29+31+30+31+30+31+31+30+31;break;
			case 12:month11[i]=0+31+29+31+30+31+30+31+31+30+31+30;break;
			}
			switch (month2[i]){
			case 1:month22[i]=0;break;
			case 2:month22[i]=0+31;break;
			case 3:month22[i]=0+31+29;break;
			case 4:month22[i]=0+31+29+31;break;
			case 5:month22[i]=0+31+29+31+30;break;
			case 6:month22[i]=0+31+29+31+30+31;break;
			case 7:month22[i]=0+31+29+31+30+31+30;break;
			case 8:month22[i]=0+31+29+31+30+31+30+31;break;
			case 9:month22[i]=0+31+29+31+30+31+30+31+31;break;
			case 10:month22[i]=0+31+29+31+30+31+30+31+31+30;break;
			case 11:month22[i]=0+31+29+31+30+31+30+31+31+30+31;break;
			case 12:month22[i]=0+31+29+31+30+31+30+31+31+30+31+30;break;
			}
			if((month11[i]-month22[i])%7==0)
				printf("YES\n");
			else if((month11[i]-month22[i])%7!=0)
				printf("NO\n");
		}
		else if(year[i]%400==0){
			switch (month1[i]){
			case 1:month11[i]=0;break;
			case 2:month11[i]=0+31;break;
			case 3:month11[i]=0+31+29;break;
			case 4:month11[i]=0+31+29+31;break;
			case 5:month11[i]=0+31+29+31+30;break;
			case 6:month11[i]=0+31+29+31+30+31;break;
			case 7:month11[i]=0+31+29+31+30+31+30;break;
			case 8:month11[i]=0+31+29+31+30+31+30+31;break;
			case 9:month11[i]=0+31+29+31+30+31+30+31+31;break;
			case 10:month11[i]=0+31+29+31+30+31+30+31+31+30;break;
			case 11:month11[i]=0+31+29+31+30+31+30+31+31+30+31;break;
			case 12:month11[i]=0+31+29+31+30+31+30+31+31+30+31+30;break;
			}
			switch (month2[i]){
			case 1:month22[i]=0;break;
			case 2:month22[i]=0+31;break;
			case 3:month22[i]=0+31+29;break;
			case 4:month22[i]=0+31+29+31;break;
			case 5:month22[i]=0+31+29+31+30;break;
			case 6:month22[i]=0+31+29+31+30+31;break;
			case 7:month22[i]=0+31+29+31+30+31+30;break;
			case 8:month22[i]=0+31+29+31+30+31+30+31;break;
			case 9:month22[i]=0+31+29+31+30+31+30+31+31;break;
			case 10:month22[i]=0+31+29+31+30+31+30+31+31+30;break;
			case 11:month22[i]=0+31+29+31+30+31+30+31+31+30+31;break;
			case 12:month22[i]=0+31+29+31+30+31+30+31+31+30+31+30;break;
			}
			if((month11[i]-month22[i])%7==0)
				printf("YES\n");
			else if((month11[i]-month22[i])%7!=0)
				printf("NO\n");
		}
		else{
			switch (month1[i]){
			case 1:month11[i]=0;break;
			case 2:month11[i]=0+31;break;
			case 3:month11[i]=0+31+28;break;
			case 4:month11[i]=0+31+28+31;break;
			case 5:month11[i]=0+31+28+31+30;break;
			case 6:month11[i]=0+31+28+31+30+31;break;
			case 7:month11[i]=0+31+28+31+30+31+30;break;
			case 8:month11[i]=0+31+28+31+30+31+30+31;break;
			case 9:month11[i]=0+31+28+31+30+31+30+31+31;break;
			case 10:month11[i]=0+31+28+31+30+31+30+31+31+30;break;
			case 11:month11[i]=0+31+28+31+30+31+30+31+31+30+31;break;
			case 12:month11[i]=0+31+28+31+30+31+30+31+31+30+31+30;break;
			}
			switch (month2[i]){
			case 1:month22[i]=0;break;
			case 2:month22[i]=0+31;break;
			case 3:month22[i]=0+31+28;break;
			case 4:month22[i]=0+31+28+31;break;
			case 5:month22[i]=0+31+28+31+30;break;
			case 6:month22[i]=0+31+28+31+30+31;break;
			case 7:month22[i]=0+31+28+31+30+31+30;break;
			case 8:month22[i]=0+31+28+31+30+31+30+31;break;
			case 9:month22[i]=0+31+28+31+30+31+30+31+31;break;
			case 10:month22[i]=0+31+28+31+30+31+30+31+31+30;break;
			case 11:month22[i]=0+31+28+31+30+31+30+31+31+30+31;break;
			case 12:month22[i]=0+31+28+31+30+31+30+31+31+30+31+30;break;
			}
			if((month11[i]-month22[i])%7==0)
				printf("YES\n");
			else if((month11[i]-month22[i])%7!=0)
				printf("NO\n");
		}
	}
	return 0;
}

