int main()
{
	int rnfeb(int year);
	int n,year,month1,month2,e,i,j,day,num=0;
	scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d %d %d",&year,&month1,&month2);
			if(month1<month2){
				e=month1;
				month1=month2;
				month2=e;
			}
			num=0;
			for(j=month2;j<month1;j++){
				if(j==1||j==3||j==5||j==7||j==8||j==10||j==12){
					day=31;
				}
				else if(j==4||j==6||j==9||j==11){
					day=30;
				}
				else if(j==2){
					day=rnfeb(year);
				}
				num+=day;
			}
			if(num%7==0){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}
	return 0;
}
int rnfeb(int year){
	int z;
	if((year%4==0&&year%100!=0)||(year%400==0)){
		z=29;
	}else{
		z=28;
	}
	return (z);
}