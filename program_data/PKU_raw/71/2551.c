int main()
{
	int n,i;
	int year,month1,month2;
	int day(int year,int month);
	scanf("%d\n",&n);
	for(i=1;i<=n;i++){
		scanf("%d%d%d",&year,&month1,&month2);
		if((day(year,month1)-day(year,month2))%7==0){printf("YES\n");}
		else{printf("NO\n");}
	}
	
	return 0;

}
int day(int year,int month)
{
	int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i,c;
	if(year%4==0&&(year%100!=0)||(year%400==0)){days[2]++;}
	c=0;
	for(i=1;i<month;i++){c+=days[i];}
	return c;
}