int main()
{
  int i, s=0, b;
  scanf("%d", &b);
  for (i=1;i<=b;i++){
   if (i%7==0){
    continue;}
   else if(i==17||i==27||i==37||i==47||i==57||i==67||i==77||i==87||i==97||i==71||i==72||i==73||i==74||i==75||i==76||i==78||i==79){
    continue;} 
   else{
   s+=i*i;}
}
  printf("%d", s);
  return 0;
}