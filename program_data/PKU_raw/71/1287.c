int isRunNian(int year){
	int result;
	if(year%400 == 0 ||(year%4==0 && year%100!=0)){
		result = 1;
	} else{
		result = 0;
	}
      return result;	
}


int DiJiTian(int year, int month, int day){
	int result = 0;
	for(int i = 1; i < month; i++){ 	//step1
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			result += 31;	
		} else if (i == 4 || i ==6 || i == 9 || i==11){
			result += 30;
		} else if(i == 2){
			if(isRunNian(year)){
				result += 29;
			} else {
				result += 28;
			}	
		}
	}
	result += day;	//step2
	return result;	
}

int main(int argc, char* argv[])
{int n;
   int sz[200][3];
   scanf("%d",&n);
   int a=0;
   int b=0;

   for(int i=0;i<n;i++){
	   scanf("%d %d %d",&sz[i][0],&sz[i][1],&sz[i][2]);
	   a=DiJiTian(sz[i][0],sz[i][1],1)-DiJiTian(sz[i][0],sz[i][2],1);
       b=a%7;
	   if(b==0){
		   printf("YES\n");
	   }
	   else{
		   printf("NO\n");
	   }
	   
	   
   }
	return 0;
}


