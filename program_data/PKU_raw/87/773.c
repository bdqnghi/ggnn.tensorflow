int main(){
   int a,b,c,d,e,f,s,i=1;
   while(i){
   scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
   i=a;
   if(i==0){
   break;}
   s=f-c+(e-b)*60+(d-a+12)*3600;
printf("%d\n",s);
}
return 0;
}



