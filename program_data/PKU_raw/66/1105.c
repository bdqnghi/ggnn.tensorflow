int isRunNian(int year){
	int result;
	if(year%400 == 0 ||(year%4==0 && year%100!=0))
		result = 1;
	 else
		result = 0;
	 return result;	
}
int DiJiTian(int year,int month, int day){
	int result = 0;
	for(int i = 1; i < month; i++){ 	
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			result += 3;	
		 else if (i == 4 || i ==6 || i == 9 || i==11)
			result += 2;
		 else if(i == 2){
			if(isRunNian(year))
				result += 1;
			else 
				result += 0;
				}
	}
	result += day;	
	return result;	
}
int main()
{
    int a,b,c,d,s=0;
 scanf("%d %d %d",&a,&b,&c);
 for(int i=1;i<=(a+399)%400;i++){
      if(isRunNian(i)) 
      s+=2;
      else
      s+=1;  }
      d=s+DiJiTian(a,b,c);
      if(d%7==1)
      printf("Mon.");
      if(d%7==2)
      printf("Tue.");
      if(d%7==3)
      printf("Wed.");
      if(d%7==4)
      printf("Thu.");
      if(d%7==5)
      printf("Fri.");
      if(d%7==6)
      printf("Sat.");
      if(d%7==0)
      printf("Sun.");
      return 0; }
 
