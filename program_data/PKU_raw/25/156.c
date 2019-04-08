int main()
{
int i,a;
double d;
scanf("%d",&a);
d=1;
if(a==0){
d=1;
}
if(a!=0){
for(i=1;i<=a;i++){
d=d*2;
}
}
printf("%.0lf",d);
}