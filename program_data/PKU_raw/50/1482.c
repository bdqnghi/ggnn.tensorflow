int main(){
   int w,d[13],r=0,i;
   scanf("%d",&w);
   d[1]=12;
   d[2]=12+31;
   d[3]=d[2]+28;
   d[4]=d[3]+31;
   d[5]=d[4]+30;
   d[6]=d[5]+31;
   d[7]=d[6]+30;
   d[8]=d[7]+31;
   d[9]=d[8]+31;
   d[10]=d[9]+30;
   d[11]=d[10]+31;
   d[12]=d[11]+30;
	   if(w==5){
		   for(i=1;i<=12;i++){
			   if(d[i]%7==0){
				   printf("%d\n",i);
			   }
		   }
	   }else if(w==4){
		   for(i=1;i<=12;i++){
			   if(d[i]%7==1){
				   printf("%d\n",i);
			   }
		   }
	   }else if(w==3){
		   for(i=1;i<=12;i++){
			   if(d[i]%7==2){
				   printf("%d\n",i);
			   }
		   }
	   }else if(w==2){
		   for(i=1;i<=12;i++){
			   if(d[i]%7==3){
				   printf("%d\n",i);
			   }
		   }
	   }else if(w==1){
		   for(i=1;i<=12;i++){
			   if(d[i]%7==4){
				 printf("%d\n",i);
			   }
		   }
	   }else if(w==6){
		   for(i=1;i<=12;i++){
			   if(d[i]%7==6){
				  printf("%d\n",i);
			   }
		   }
	   }else if(w==7){
		   for(i=1;i<=12;i++){
			   if(d[i]%7==5){
				   printf("%d\n",i);
			   }
		   }
	   }
	return 0;
}