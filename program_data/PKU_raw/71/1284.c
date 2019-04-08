    int isRunNian(int year){
	int result;
	if(year%400==0||(year%4==0&&year%100!=0)){
		result=1;
	} else{
		result=0;
	}
      return result;	
}
int main()
{

	int year,month,day=1,m1,d1=1,t1,a,total,i=1,n,s;
	scanf("%d",&n);
	for(a=0;a<n;a++){
	scanf("%d%d%d",&year,&month,&m1);
	total=0;
	for(i=1;i<month;i++){ 	//step1
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			total+=31;	
		} else if(i==4||i==6||i==9||i==11){
			total+=30;
		} else if(i==2){
			if(isRunNian(year)){
				total+=29;
			} else{
				total+=28;
			}	
		}
	}
	total+=day;
	t1=0;
	for(i=1;i<m1;i++){ 	//step1
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			t1+=31;	
		} else if(i==4||i==6||i==9||i==11){
			t1+=30;
		} else if(i==2){
			if(isRunNian(year)){
				t1+=29;
			} else{
				t1+=28;
			}	
		}
	}
	t1+=d1;
		s=total-t1;
		if(s%7==0||(0-s)%7==0){
			printf("YES\n");
		}
		else{printf("NO\n");
		}
	}
	return 0;
}
