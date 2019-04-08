
int main(){
int a,b,c,d,i;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
b=(b>c)?b:c;
c=(b<c)?b:c;
i=3;
while(i<=a){
scanf("%d",&d);
if(d>b){
c=b;
b=d;
}
if((d<b)&&(d>c)){
c=d;
}
i++;
}
printf("%d\n",b);
printf("%d",c);
return 0;
}
