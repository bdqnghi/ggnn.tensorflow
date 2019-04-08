int main()
{
int a,b,c,d,e,f,g;
for(int i=1;;i++){
g=0;
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
break;
} else{
if(c!=0){
b=59-b;
c=60-c;
} else{
b=60-b;
}
a=a+1;
d=d+12;
d=(d-a)*3600;
e=(e+b)*60;
f=f+c;
g=d+e+f;
printf("%d\n",g);
}
}
}