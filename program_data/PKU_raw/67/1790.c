int main(){
int n,zong,you,i;
double x,y;
x=0.0,y=0.0;
scanf("%d",&n);
scanf("%d %d",&zong,&you);
x=1.0*you/zong;
for(i=0;i<n-1;i++){
scanf("%d %d",&zong,&you);
y=1.0*you/zong;
if((y-x)*100>5){printf("better\n");}
else if((x-y)*100>5){printf("worse\n");}
else {printf("same\n");}
}
return 0;
}