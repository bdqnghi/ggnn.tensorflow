int main (){
 int n,i,year[200],mouth1[200],mouth2[200],result[200];
 int djt(int year , int mouth);
 scanf("%d", &n);
 for(i=0;i<n;i++){
  scanf("%d %d %d", &year[i], &mouth1[i], &mouth2[i]);
  result[i]= djt( year[i],  mouth1[i]) - djt( year[i],  mouth2[i]);
 }
for(i=0;i<n;i++){
 if(result[i]%7==0){
  printf("YES\n");
 }
 else{
  printf("NO\n");
 }
}
return 0;
}


int djt(int year , int mouth)
{
 int i,djt=0;
    for(i=0;i<mouth;i++){
 if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
  djt+=31;
 }
 if(i==4||i==6||i==9||i==11){
  djt+=30;
 }
 if(i==2){
  if((year%4==0&&year%100!=0)||year%400==0){
   djt+=29;
  }
  else{
   djt+=28;
  }
 }
 }
 return (djt);
} 

