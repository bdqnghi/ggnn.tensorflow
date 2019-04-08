int main(){
int a,b,c,d,e,f,total;
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
while(a!=0){
 total=3600*(d+12-a-1)+60*e+f+3600-60*b-c;
 printf("%d\n",total);
 scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
}
return 0;
}