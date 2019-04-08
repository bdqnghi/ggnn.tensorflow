int leap(int);
int main()
{
	int total[13]={0,31,59,90,120,151,181,212,243,273,304,334,365};
	int y1,y2,m1,m2,d1,d2;
	int sum=0,j;
	scanf("%d %d %d %d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
	/*??????????????2????*/ 
	if (y1==y2){
	   	  if (leap(y1)==0)  
			 sum+=total[m2-1]-total[m1-1]+d2-d1;
	   	  if (leap(y1)==1&&m2>2)  
			 sum+=total[m2-1]-total[m1-1]+d2-d1+1; 
	}
	/*?????????????????????2???*/ 
	if (y2>y1){
       for(j=y1+1;j<y2;j++){
          if (leap(j)==1) sum+=366;
          else if (leap(j)==0) sum+=365;
       }
       
	   if (leap(y1)==0)  
	      sum+=365-total[m1-1]-d1;
	   else if (m1<=2)  
	      sum+=365-total[m1-1]-d1+1;
       
	   if (leap(y2)==0)  
	      sum+=total[m2-1]+d2;
       else if (m2>2)   
	      sum+=total[m2-1]+d2+1;
	}  
	printf("%d",sum);
}

int leap(int y){
	int j;
	if (y%400==0 || y%100!=0 && y%4 == 0) j=1;
	else j=0;
	return j;
}