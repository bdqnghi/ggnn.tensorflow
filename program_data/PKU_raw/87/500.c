int main(){
int a,b,c,d,e,f,s,i;
for(i=0;i<=100;i++){
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
return 0;
}else{
d=d+12;
s=(d-a)*60*60;
if(e>=b){
s=s+((e-b)*60);
}else{
s=s-((b-e)*60);
}
s=s+f-c;
printf("%d\n",s);
}
}
return 0;
} 