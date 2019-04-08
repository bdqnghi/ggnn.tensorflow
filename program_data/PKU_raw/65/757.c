int main(){
int n,a,b,A=0,B=0;
scanf("%d",&n);
for(int i=1;i<=n;i++){
scanf("%d%d",&a,&b);
{
if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
A=A+1;
}
else{
if(a!=b){
B=B+1;
}
}
}
}
if(A==B){
printf("Tie");
}
if(A>B){
printf("A");
}
if(B>A){
printf("B");
}
return 0;
}