int main(){
int n;
scanf("%d",&n);
int a[n];
int sz[n];
int i,m;
double j,GPA,f;
GPA=0;
m=0;
for(i=0;i<n;i++){
scanf("%d",&a[i]);
m=m+a[i];
}
for(i=0;i<n;i++){
scanf("%d",&sz[i]);
}
for(i=0;i<n;i++){
if((sz[i]>=90)&&(sz[i]<=100)){
j=4.0;
}else if((sz[i]>=85)&&(sz[i]<=89)){
j=3.7;
}else if((sz[i]>=82)&&(sz[i]<=84)){
j=3.3;
}else if((sz[i]>=78)&&(sz[i]<=81)){
j=3.0;
}else if((sz[i]>=75)&&(sz[i]<=77)){
j=2.7;
}else if((sz[i]>=72)&&(sz[i]<=74)){
j=2.3;
}else if((sz[i]>=68)&&(sz[i]<=71)){
j=2.0;
}else if((sz[i]>=64)&&(sz[i]<=67)){
j=1.5;
}else if((sz[i]>=60)&&(sz[i]<=63)){
j=1.0;
}else if(sz[i]<60){
j=0;
}
f=j*a[i];
GPA=GPA+f;
}
GPA=GPA/m;
printf("%.2f",GPA);
return 0;
}
