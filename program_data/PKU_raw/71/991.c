int main(){
int n,i,j,y,m1,m2,d,day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d %d",&y,&m1,&m2);
d=0;
if(m1>m2){
for(j=m2;j<m1;j++)
d+=day[j];
if(((y%4==0&&y%100!=0)||y%400==0)&&m2<=2)
d+=1;
if(d%7==0)
printf("YES\n");
else 
printf("NO\n");
}
else if(m1<m2){
for(j=m1;j<m2;j++)
d+=day[j];
if(((y%4==0&&y%100!=0)||y%400==0)&&m1<=2)
d+=1;
if(d%7==0)printf("YES\n");
else printf("NO\n");
}
}
return 0;
}