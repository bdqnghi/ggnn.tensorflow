main()
{int y1,y2,m1,m2,d1,d2,y,d,m,c,b,e,f,g,h;
 scanf("%d %d %d",&y1,&m1,&d1);
 scanf("%d %d %d",&y2,&m2,&d2);
 int a[13]={0};f=0;b=0;c=0;
 a[1]=31;a[3]=31;a[5]=31;a[7]=31;a[8]=31;a[10]=31;a[12]=31;
 a[4]=30;a[6]=30;a[9]=30;a[11]=30;
y=y1;m=1;d=1;
if (y%4!=0) a[2]=28;else if (y%100!=0) a[2]=29; else if (y%400!=0) a[2]=28; else a[2]=29;
while(m<m1){
b=b+a[m];m=m+1;}
while(d<d1){
b=b+1;d=d+1;}
m=1;d=1;
while(m<m2){
c=c+a[m];m=m+1;}
while(d<d2){
c=c+1;d=d+1;}f=c-b;y=y1;
while (y<y2)
{
e=y+1;if (m<2) {if (y%4!=0) g=365;else if (y%100!=0) g=366; else if (y%400!=0) g=365; else g=366;} else if (e%4!=0) g=365;else if (e%100!=0) g=366; else if (e%400!=0) g=365; else g=366;y=y+1;f=f+g;
}
printf("%d",f);
return 0;
}