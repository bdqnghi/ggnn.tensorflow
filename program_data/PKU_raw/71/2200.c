int dijitian(int y,int m,int d);
int main(){
    int n,k,year,month1,month2,cha;
	scanf("%d",&n);
	for(k=0;k<n;k++){
	   scanf("%d %d %d",&year,&month1,&month2);
       cha=dijitian(year,month1,1)-dijitian(year,month2,1);
	   if(cha<0){
	      cha=-cha;
	   }
	   if(cha%7==0){
	      printf("YES\n");
	   }else{
	      printf("NO\n");
	   }
	}
return 0;
}
int dijitian(int y,int m,int d){
    int sum=0;
	int i;
	for(i=1;i<m;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
		    sum+=31;
		}else if(i!=2){
		    sum+=30;
		}else{
			if((y%400==0)||(y%100!=0&&y%4==0)){
			   sum+=29;
			}else{
			   sum+=28;
			}
		}
	}
    sum+=d;
	return sum;
}