int main(){
int n,i,e[100];
double a,b,d,c;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&e[i]);
if(e[i]<=18&&e[i]>=1){
b++;}
else if(e[i]>=19&&e[i]<=35){
a++;}
else if(e[i]>=36&&e[i]<=60)
{
c++;}
else{d++;}
}
printf("1-18: %.2lf%%\n",b*100/n);
printf("19-35: %.2lf%%\n",a*100/n);
printf("36-60: %.2lf%%\n",c*100/n);
printf("Over60: %.2lf%%\n",100-b*100/n-a*100/n-c*100/n);
return 0;
}