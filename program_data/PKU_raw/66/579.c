
int main(int argc, char *argv[])
{
  int year,month,day,n_runnian=0,diyitian,m,i,sum=0;
  int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  scanf("%d%d%d",&year,&month,&day);
  
  n_runnian=(year-1)/100-(year-1)/400;
  n_runnian=(year-1)/4-n_runnian;
  
  
  diyitian=(year-1+n_runnian)%7;

  
  if(year%100>0){   //????????? 
  if(year%4==0)
               a[2]=29;
               }
  if(year%400==0){
                 a[2]=29;
                 }
               
  //????? 
  for(i=0;i<month;i++){
                            sum=sum+a[i];
                            }
  sum=sum+day;
 
  m=(sum%7+diyitian)%7;
  
  switch (m){
         case 0 :printf("Sun.");break;
         case 1 :printf("Mon.");break;
         case 2 :printf("Tue.");break;
         case 3 :printf("Wed.");break;
         case 4 :printf("Thu.");break;
         case 5 :printf("Fri.");break;
         case 6 :printf("Sat.");
         }
  
  
  

  return 0;
}