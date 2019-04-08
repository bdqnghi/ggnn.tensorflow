int main()
{
	int p[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	long year,month,day,y;
	int sum;
	int a,b;
    scanf("%d%d%d",&year,&month,&day);
	if(year%400==0){ 
        sum=0;
	    if(month<=2){
		      for(int j=1;j<month;j++){
		            sum=sum+p[j-1];
			  }
		}
		else{
			  for(int k=1;k<month;k++){
		            sum=sum+p[k-1];
			  }	
			 sum=sum+1;
		}
		sum=sum+day;
	}
    else {
		sum=0;
		   while(year>400){
		      year=year-400;
		   }
    a=(year-1)/4;
	b=(year-1)/100;
	sum=365*year+a+1-b;
      for(int i=1; i<month; i++){
           sum=sum+p[i-1];
	  }
    if(year%4==0&&year%100!=0)sum++;
          sum=sum+day;
	}
	y=sum%7;
         if(y==2)printf("Sun.\n");
	else if(y==3)printf("Mon.\n");
	else if(y==4)printf("Tue.\n");
	else if(y==5)printf("Wed.\n");
	else if(y==6)printf("Thu.\n");
	else if(y==0)printf("Fri.\n");
    else if(y==1)printf("Sat.\n");
	return 0;
}

