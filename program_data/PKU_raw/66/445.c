

int isRunNian(int year);
void main(){
 

  int iday,imonth,iyear;

  int i,j,num,t1;
  int sum;


 scanf("%d%d%d",&iyear,&imonth,&iday);

 sum=0;


 //??????
 //???????




sum=(iyear-1)*(365%7) + (iyear-1)/4 - (iyear-1)/100 + (iyear-1)/400;


//printf("%d \n",sum);
//printf("%d %d\n",sum,num-j);

//??????


for(i=1;i<imonth;i++)
{

		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			sum += 31;	
		} else if (i == 4 || i ==6 || i == 9 || i==11){
			sum += 30;
		} else if(i == 2){
			if(isRunNian(iyear)){
				sum += 29;
			} else {
				sum += 28;
			}	
		}



}
//?????
sum+=iday;

j=sum%7;

switch(j)
{
	 case 0:
         printf("Sun.\n");
		 break;
	 case 1:
         printf("Mon.\n");
		 break;

	 case 2:
		 printf("Tue.\n");
         break;
	 case 3:
		 printf("Wed.\n");
         break;
	 case 4:
		 printf("Thu.\n");
         break;
	 case 5:
		 printf("Fri.\n");
         break;	 
	 case 6:
		 printf("Sat.\n");
         break;
	 case 7:
		 printf("Sun.\n");
         break;

}










}



int isRunNian(int year){
	int result;
	if(year%400 == 0 ||(year%4==0 && year%100!=0)){
		result = 1;
	} else{
		result = 0;
	}
      return result;	
}