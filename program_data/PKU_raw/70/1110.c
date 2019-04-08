int main(){
int n;
scanf("%d",&n);
int i,a=0;
float x,y,x1,y1,x2,y2,x3,y3,x4,y4;
for(i=0;i<n;i++){
scanf("%f %f",&x,&y);
if(a==0){
x1=x2=x3=x4=x;
y1=y2=y3=y4=y;
a=1;
}
if(x<x1){
x1=x;
y1=y;}
if(x>x2){
x2=x;
y2=y;}
if(y<y3){
x3=x;
y3=y;}
if(y>y4){
x4=x;
y4=y;
}
}
float dis1,dis2,dis3,dis4,dis5,dis6,dis;
dis1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
dis=dis1;
dis2=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
if(dis2>dis){
dis=dis2;
}
dis3=sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1));
if(dis3>dis){
dis=dis3;
}
dis4=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
if(dis4>dis){
dis=dis4;
}
dis5=sqrt((x4-x2)*(x4-x2)+(y4-y2)*(y4-y2));
if(dis5>dis){
dis=dis5;
}
dis6=sqrt((x4-x3)*(x4-x3)+(y4-y3)*(y4-y3));
if(dis6>dis){
dis=dis6;
}
printf("%.4f\n",dis);
return 0;
}

