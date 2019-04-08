int main(){
int n;
scanf("%d",&n);
if(n>=10000){
int a,b,c,d,e,k;
a=n/10000;
b=(n-a*10000)/1000;
c=(n-a*10000-b*1000)/100;
d=(n-a*10000-b*1000-c*100)/10;
e=n-a*10000-b*1000-c*100-d*10;
k=e*10000+d*1000+c*100+b*10+a;
printf("%d",k);
}
else if(n<10000&&n>=1000){
int a,b,c,d,k;
a=n/1000;
b=(n-a*1000)/100;
c=(n-a*1000-b*100)/10;
d=n-a*1000-b*100-c*10;
k=d*1000+c*100+b*10+a;
printf("%d",k);
}
else if(n>=100){
int a,b,c,k;
a=n/100;
b=(n-a*100)/10;
c=n-a*100-b*10;
k=c*100+b*10+a;
printf("%d",k);
}
else if(n>=10){
int a,b,k;
a=n/10;
b=n-a*10;
k=b*10+a;
printf("%d",k);
}
else{printf("%d",n);}
return 0;
}
