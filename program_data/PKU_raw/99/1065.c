int main(){
int n,a,i;
double b,c,d,e;
scanf("%d",&n);
b=0;
c=0;
d=0;
e=0;
for(i=1;i<=n;i++){
	scanf("%d",&a);
if(a<=18){
b=b+1;
}
else if (a>=19&&a<=35){
c=c+1;}
else if(a>=36&&a<=60){
d=d+1;}
else {
e=e+1;}
}
b=((double)b/n)*100;
c=((double)c/n)*100;
d=((double)d/n)*100;
e=((double)e/n)*100;

printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",b,c,d,e);

return 0;

}