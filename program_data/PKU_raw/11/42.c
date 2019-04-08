
int leap(int n){
	int leap=0;
	if(n%400==0 || n%100!=0 && n%4==0) leap=1;
	return(leap);
}

int main(){
	int year, month, day, th=0, a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d", &year, &month, &day);
	if(leap(year)==1) a[2]=29;
	for(int i=0; i<month; i++) th=th+a[i];
	th=th+day;
	printf("%d", th);
	return(0);
}