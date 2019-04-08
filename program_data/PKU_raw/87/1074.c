int main(){
int a,b,c,d,e,f,g,h,z;
for(;;){
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
break;
}
else{
z=(d+11-a)*3600+f+60*e+3600-(c+60*b);
printf("%d\n",z);
}
}
return 0;
   }