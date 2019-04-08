int pd(int x,int y);
int main()
{
int n,c;
scanf("%d",&n);
for(int i=1;i<=12;i++){
c=pd(i,n);
if(c==0){
printf("%d\n",i);
}
}
return 0;
}
int pd(int x,int y){
int s,d;
s=0;
for(int w=1;w<=x;w++){
if(w==1){
s=s+13;
}
if(w==2||w==4||w==6||w==8||w==9||w==11){
s=s+31;
}
if(w==3){
s=s+28;
}
if(w==5||w==7||w==10||w==12){
s=s+30;
}
}
s=s+y-1;
if(s%7==5){
d=0;
} else{
d=1;
}
return d;
}