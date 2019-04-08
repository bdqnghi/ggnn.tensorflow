int main(){
int a,b,c,d,e,f,m,i;
for(i=0;i<=100;i++){
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
    return 0;
}else{
d=d+12;
m=(d-a)*60*60;
if(e>=b){
    m=m+((e-b)*60);
}else{
    m=m-((b-e)*60);
}
if(f>=c){
    m=m+f-c;
}else{
    m=m+f-c;
}
printf("%d\n",m);
}
}
return 0;
}