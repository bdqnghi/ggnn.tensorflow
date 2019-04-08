int RN(int);
int RN(int year){
	if(year%400 == 0 ||(year%4==0 && year%100!=0)){
	return 1;
	} else{
		return 0;
	}
}
int main(){
	int n;
	int i,k;
	int a,b,c,e;
	
	scanf("%d",&n);
	for(k=0;k<n;k++){
		scanf("%d %d %d",&a,&b,&c);
int total=0;
		if(b>c){
			e=c;
			c=b;
			b=e;
		}
		for(i=b;i<c;i++){
if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			total += 31;	
		} else if (i == 4 || i ==6 || i == 9 || i==11){
			total += 30;
		} else if(i == 2){
			if(RN(a)){
				total += 29;
			} else {
				total += 28;
			}
		}
		}
		if(total%7==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		}
		return 0;
	}
		
