int main(){
  int a;
  int b,c,d;
  scanf("%d",&a);
      b=3;
      c=5;
      d=7;
  if(a%3==0&&a%5==0&&a%7==0){
      printf("%d %d %d\n",b,c,d);
 }else if(a%3==0&&a%5==0){
  printf("%d %d\n",b,c);
}else if(a%3==0&&a%7==0){
printf("%d %d\n",b,d);
}else if(a%5==0&&a%7==0){
printf("%d %d\n",c,d);
}else if(a%3==0){
printf("%d\n",b);
}else if(a%5==0){
printf("%d\n",c);
}else if(a%7==0){
printf("%d\n",d);
}else{
printf("n");
}
return 0;
}
