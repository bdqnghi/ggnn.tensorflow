int DiJiTian(int year,int month);
int main(int argc, char* argv[])
{
	int  n,year,m1,m2,c,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&year,&m1,&m2);
		c=abs(DiJiTian(year,m1)-DiJiTian(year,m2));
		if(c%7==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
		return 0;
}
int DiJiTian(int year,int month){
	int i,result;
	result=1;
	for(i=1;i<month;i++)
	{ 
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			result+=31;
		}
		else if(i==4||i==6||i==9||i==11){
			result+=30;
		}else if(i==2){
			if(year%400==0||(year%100!=0&&year%4==0)){
				result+=29;
			}else{
				result+=28;
			}
		}
	}
			return result;
}
	                          
		
