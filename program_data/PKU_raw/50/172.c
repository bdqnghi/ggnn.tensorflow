
main(){
	int n, i, mon[11]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30}, day[12];
	scanf("%d", &n);
	day[0]=0;
	for(i=1; i<12; i++)	day[i]=mon[i-1]+day[i-1];
	for(i=0; i<12; i++) day[i]=day[i]+13+(n-1);
	for(i=0; i<12; i++){
		if(day[i]%7==5) printf("%d\n", i+1);
		else continue;
	}
}