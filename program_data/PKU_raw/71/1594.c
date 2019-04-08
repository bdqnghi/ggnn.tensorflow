int isRunNian(int year)
{
	int result;
	if(year%400 == 0 ||(year%4==0 && year%100!=0)){
		result = 1;
	} else{
		result = 0;
	}
      return result;	
}
int DiJiTian(int year,int m1,int m2){
	int result = 0;
	for(int i = m1; i < m2; i++){ 	
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
	if(result%7==0) return 1;
	else return 0;
}


int main()
{
	int n,i,year[1000],m1[1000],m2[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&year[i],&m1[i],&m2[i]);
	}
	for(i=0;i<n;i++){
		if(m1[i]<m2[i]){
			if(DiJiTian(year[i],m1[i],m2[i])) printf("YES\n");
			else printf("NO\n");
		}
		else{
			if(DiJiTian(year[i],m2[i],m1[i])) printf("YES\n");
			else printf("NO\n");
		}
	}
	return 0;
}
