int Dijitian(int Y,int M,int D);
int isRunNian(int Y);
int main(){
int Y,M,D;
scanf("%d%d%d",&Y,&M,&D);
int X1=0;
int X2=0;
int X;
 
X1 += X1+ Y -1 + (Y-1)/4 -(Y-1)/100 + (Y-1)/400;
X1 = X1% 7;

X2=Dijitian(Y,M,D);
X=X1+X2;
if(X%7==1){
printf("Mon.");
}else if(X%7==2){
printf("Tue.");
}else if(X%7==3){
printf("Wed.");
}
else if(X%7==4){
printf("Thu.");
}
else if(X%7==5){
printf("Fri.");
}
else if(X%7==6){
printf("Sat.");
}else if(X%7==0){
printf("Sun.");
}
return 0;
}
int Dijitian(int Y,int M,int D){
int X=0;
int Q;
for(int i=1;i<M;i++){
if(i==1||i==3||i==5||i==7||i==8||i==10){
X+=3;
}else if(i==4||i==6||i==9||i==11){
X+=2;
}else if(i==2){
if(isRunNian(Y)){
X+=1;
}else{
X+=0;
}
}
}
Q=X+D;
return Q;
}
int isRunNian(int Y){
 int result;
if(Y%400==0||(Y%4==0&&Y%100!=0)){
result=1;
}else{
result=0;
}
return result;
}
