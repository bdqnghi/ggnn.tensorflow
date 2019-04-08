int main(){
  int n, year, i;
   double a, b, c, d;
    a=0;
    b=0;
    c=0;
    d=0;
  scanf("%d", &n);
  for(i=0;i<n;i++){
   scanf("%d", &year);
   if(year<=18 && year>=1){
      a++;}
  if(year>18 && year<=35){
   b++;}
   if(year>35 && year<=60){
   c++;}
    if(year>60){
     d++;}
          }
     printf("1-18: %.2lf", a/n*100); printf("%%\n");
    printf("19-35: %.2lf", b/n*100); printf("%%\n");
    printf("36-60: %.2lf", c/n*100); printf("%%\n");
      printf("60??: %.2lf", d/n*100); printf("%%\n");
     return 0;
     }