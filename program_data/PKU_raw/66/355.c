int main() 
{ 
int day,mn,yr,i,days=0,s,k; 
int mont[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
scanf("%d %d %d",&yr,&mn,&day); 
if (yr%4==0||yr%100==0||yr%400==0) 
mont[2]=29; 
else 
mont[2]=28; 
for (i=0;i<mn;i++) 
days+=mont[i]; 
days+=day; 
s=yr-1+(int)((yr-1)/4)-(int)((yr-1)/100)+(int)((yr-1)/400)+days; 
k=s%7; 
if(k==0){
printf("Sun.");
}
else if(k==1){
printf("Mon.");
}
else if(k==2){
printf("Tue.");
}
else if(k==3){
printf("Wed.");
}
else if(k==4){
printf("Thu.");
}
else if(k==5){
printf("Fri.");}
else 
printf("Sat.");
   return 0; 
}