int main(){
int a,b,c,d,e,f,i,result;
for(i=0;;i++){
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
break;
}
d=d+12;
result=(d-a)*60*60;
result=result-b*60-c+e*60+f;
printf("%d\n",result);
}
return 0;
}